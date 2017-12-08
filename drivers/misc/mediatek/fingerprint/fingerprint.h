#ifndef __FINGERPRINT_H__
#define __FINGERPRINT_H__

struct  fingerprint_driver{

int (*compare_id)(void) ;
int (*probe)(struct spi_device *spi) ;
int (*remove)(struct spi_device *spi) ;
struct mt_chip_conf * fp_spi_conf;

};

enum fingerprint_cs{
	MTK_SPI_TEST_CS=0, // It's 0,because mtk_spi_test is used.

#ifdef CONFIG_FINGERPRINT_SUNWAVE_9551
	FINGERPRINT_SUNWAVE_9551_CS,
#endif
#ifdef CONFIG_FINGERPRINT_GF_MINANF_368_1214
	FINGERPRINT_GF_MINANF_368_1214_CS,
#endif
#ifdef CONFIG_FINGERPRINT_GF3208_GOODIX
	FINGERPRINT_GF3208_GOODIX_CS,
#endif
#ifdef CONFIG_FINGERPRINT_GF_GF5116M_1216
	FINGERPRINT_GF_GF5116M_1216_CS,
#endif
#ifdef CONFIG_FINGERPRINT_CS15XX
	FINGERPRINT_CS15XX_CS,
#endif
#if defined(CONFIG_FINGERPRINT_MICROARRAY) || defined(CONFIG_FINGERPRINT_MICROARRAY_TEE) || defined(CONFIG_FINGERPRINT_AFS120N) || defined(CONFIG_FINGERPRINT_MICROARRAY_A80T)
	FINGERPRINT_MICROARRAY_CS,
#endif
#ifdef CONFIG_FINGERPRINT_GOODIX_GF5216
	FINGERPRINT_GOODIX_GF5216_CS,
#endif
      MAX_FINGER_CHIP_CS_NUMBER
};

#endif
