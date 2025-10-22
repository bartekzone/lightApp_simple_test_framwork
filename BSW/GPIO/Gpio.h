/**
 * @file Gpio.h
 * @brief GPIO abstraction layer interface.
 *
 * This file provides the interface for GPIO operations,
 * directing calls to the HAL/MCAL layer.
 * 
 * @author Bartekzone
 * @date 2025-08-12
 */
//*********************  Gpio/Gpio.h  *********************//

#ifndef GPIO_H
#define GPIO_H

#include <stdbool.h>
#include <stdint.h>
#include "Gpio_Cfg.h"
/**
 * @brief Set a GPIO signal high.
 *
 * Sets the specified GPIO signal to a high state.
 *
 * @param signal The GPIO signal to set.
 * @return true if successful, false if signal is out of range.
 */
bool gpio_set(GpioSignal_t signal);

/**
 * @brief Set a GPIO signal low.
 *
 * Clears the specified GPIO signal to a low state.
 *
 * @param signal The GPIO signal to clear.
 * @return true if successful, false if signal is out of range.
 */
bool gpio_clear(GpioSignal_t signal);

#endif // GPIO_H