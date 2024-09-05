
#include "user_api_ai.h"
#include "adc_app.h"

uint32_t user_ai_pin_sample_count(enum_adc_pin_name pin)
{
	uint32_t retval;

	if ( pin < ADC_MAX )
	{
		if( adc_config_tbl[pin].multiplex )
		{
			retval = mgl_adc_results_mpx_counter;
		}
		else
		{
			retval = mgl_adc_results_counter[adc_config_tbl[pin].adc_instance];
		}
	}
	else
    {
		retval = 0;
    }

	return retval;
}
void user_ai_set_measurement_range(enum_adc_pin_name pin, uint8_t range)
{
#if ADC_SECOND_RANGE
    modulhardwarecode_adc_set_measurement_range(pin, range);
#endif
}


uint16_t user_ai_get(enum_adc_pin_name pin)
{
	uint16_t retval;

    if( pin < ADC_MAX )
    {
    	retval =  adc_results[pin].result_digit;
    }
    else
    {
    	retval = 0;
    }

    return retval;
}


uint16_t user_ai_get_mv(enum_adc_pin_name pin)
{
	uint16_t retval;

    if ( (pin < ADC_MAX) && (adc_config_tbl[pin].resolution != 0u) )
	{
    	retval = ((user_ai_get(pin) * adc_get_measurement_range(pin)) / adc_config_tbl[pin].resolution);
	}
    else
    {
    	retval = 0;
    }

	return retval;
}


uint16_t user_ai_get_cal(enum_adc_pin_name pin)
{
	uint16_t retval;

    if ( pin < ADC_MAX )
    {
    	retval = adc_results[pin].result_cal;
    }
    else
    {
    	retval = 0;
    }

    return retval;
}


uint16_t user_ai_get_filtered(enum_adc_pin_name pin)
{
    uint16_t retval;

    if ( (pin < ADC_MAX) && (adc_config_tbl[pin].resolution != 0u) )
    {
        if( adc_config_tbl[pin].cal_type == CALIB_NONE )
        {
        	retval = ((adc_results[pin].result_filtered * adc_get_measurement_range(pin)) / adc_config_tbl[pin].resolution);
        }
        else
        {
            retval = adc_results[pin].result_filtered;
        }
    }
    else
    {
    	retval = 0;
    }

    return retval;
}


uint16_t user_ai_get_mv_calib(enum_adc_pin_name pin)
{
    uint16_t retval;

        if( adc_config_tbl[pin].cal_type == CALIB_NONE )
        {
            retval = user_ai_get_mv(pin);
        }
        else
        {
            retval = user_ai_get_cal(pin);
        }

    return retval;
}


