/**
 * @file Gpio_Cfg.c
 * @brief GPIO configuration implementation.
 *
 * This file defines the pin mappings for GPIO signals.
 * 
 * @author Bartekzone
 * @date 2025-08-12
 */
//*********************  Gpio/Gpio_Cfg.c  *********************//
//  Abstraction layer (directs calls to HAL/MCAL)

#include "Gpio_Cfg.h"
#include "ProjectConfig.h"

/**
 * @brief Mapping of GPIO signals to hardware pin numbers.
 */
const uint8_t gpio_pin_map[] = {
    #ifdef SUPP1
        [GPIO_SIGNAL_LED] = 3,
        [GPIO_SIGNAL_RELAY]= 5
    #elif defined(SUPP2)
        [GPIO_SIGNAL_LED] = 9,
        [GPIO_SIGNAL_RELAY]= 6
    #else
        #error "No supplier defined (SUPP1 or SUPP2)"
    #endif
};