/**
 * @file Gpio.c
 * @brief GPIO abstraction layer implementation.
 *
 * This file implements the abstraction layer for GPIO operations,
 * directing calls to the HAL/MCAL layer.
 * 
 * @author Bartekzone
 * @date 2025-08-12
 */
//*********************  Gpio/Gpio.c  *********************//

#include "Gpio.h"
#include "Dio.h"
/**
 * @brief Set a GPIO signal high.
 *
 * Sets the specified GPIO signal to a high state.
 *
 * @param signal The GPIO signal to set.
 * @return true if successful, false if signal is out of range.
 */
bool gpio_set(GpioSignal_t signal) {
    if (signal >= GPIO_SIGNAL_COUNT) return false;
    Dio_Write(gpio_pin_map[signal], true);
    return true;
}
/**
 * @brief Set a GPIO signal low.
 *
 * Clears the specified GPIO signal to a low state.
 *
 * @param signal The GPIO signal to clear.
 * @return true if successful, false if signal is out of range.
 */
bool gpio_clear(GpioSignal_t signal) {
    if (signal >= GPIO_SIGNAL_COUNT) return false;
    Dio_Write(gpio_pin_map[signal], false);
    return true;
}