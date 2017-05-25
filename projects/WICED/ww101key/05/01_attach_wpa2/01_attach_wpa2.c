// Attach to a WPA2 network named WW101WPA (this is set in the wifi_config_dct.h file).
//
// If the connection is successful, the green LED will blink. If not the red LED will blink.
#include "wiced.h"

void application_start( )
{
    /* Variables */   
	wiced_result_t connectResult;
    wiced_bool_t led = WICED_FALSE;

    wiced_init();	/* Initialize the WICED device */

    connectResult = wiced_network_up(WICED_STA_INTERFACE, WICED_USE_EXTERNAL_DHCP_SERVER, NULL);

    while ( 1 )
    {
        if(connectResult == WICED_SUCCESS)
        {
        	/* Blink LED */
        	if ( led == WICED_TRUE )
        	{
        		wiced_gpio_output_low( WICED_SH_LED1 );
        		led = WICED_FALSE;
        	}
        	else
        	{
        		wiced_gpio_output_high( WICED_SH_LED1 );
        		led = WICED_TRUE;
        	}
        }
        wiced_rtos_delay_milliseconds(250);
    }
}
