ifeq ($(USE_SMART_BUILD),yes)
ifneq ($(findstring HAL_USE_SPI TRUE,$(HALCONF)),)
PLATFORMSRC += $(CHIBIOS_CONTRIB)/os/hal/ports/ES32/LLD/SPIv1/hal_spi_lld.c
endif
else
PLATFORMSRC += $(CHIBIOS_CONTRIB)/os/hal/ports/ES32/LLD/SPIv1/hal_spi_lld.c
endif

PLATFORMINC += $(CHIBIOS_CONTRIB)/os/hal/ports/ES32/LLD/SPIv1
