/**
 * @file Gpio_Cfg.h
 * @brief GPIO configuration definitions.
 *
 * This file contains configuration types and pin mappings for GPIO abstraction.
 * 
 * @author Bartezone
 * @date 2025-08-12
 */
//*********************  Gpio/Gpio_Cfg.h  *********************//
//  Abstraction layer (directs calls to HAL/MCAL)


#ifndef GPIO_CFG_H
#define GPIO_CFG_H

#include <stdint.h>
#include <stdbool.h>

/**
 * @brief GPIO signal identifiers.
 */
typedef enum {
    GPIO_SIGNAL_LED,
    GPIO_SIGNAL_RELAY,
    GPIO_SIGNAL_COUNT
} GpioSignal_t;

/**
 * @brief Mapping of GPIO signals to hardware pin numbers.
 */
extern const uint8_t gpio_pin_map[];

#endif