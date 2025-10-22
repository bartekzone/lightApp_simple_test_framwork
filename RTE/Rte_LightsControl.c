/**
 * @file Rte_LightsControl.c
 * @brief RTE implementation for lights control.
 *
 * This file implements the runtime environment (RTE) functions for controlling lights.
 * 
 * @author Bartezone
 * @date 2025-08-12
 */

#include "Rte_LightsControl.h"
#include "Gpio.h"
#include "ErrorHandler.h"

/**
 * @brief Turn on the LED via RTE.
 *
 * Sets the LED signal high. Reports an error if the operation fails.
 */
void Rte_TurnOnLed(void) {
    if (!gpio_set(GPIO_SIGNAL_LED)) {
        Error_Report(ERROR_GPIO_FAILURE);
    }
}

/**
 * @brief Turn off the relay via RTE.
 *
 * Clears the relay signal. Reports an error if the operation fails.
 */
void Rte_TurnOffRelay(void) {
    if (!gpio_clear(GPIO_SIGNAL_RELAY)) {
        Error_Report(ERROR_GPIO_FAILURE);
    }
}