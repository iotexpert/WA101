NAME := App_WW101KEY_05_02_attach_wpa2

$(NAME)_SOURCES := 02_attach_wpa2.c

WIFI_CONFIG_DCT_H := wifi_config_dct.h

# These do not have any LEDs/Buttons
INVALID_PLATFORMS := BCM943909* BCM943907*