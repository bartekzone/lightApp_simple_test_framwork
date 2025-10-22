/**
 * @file Swc_LightsControl.c
 * @brief Application software component for lights control.
 *
 * This file implements the application-level functions for controlling lights,
 * using the RTE interface.
 * 
 * @author Bartekzone
 * @date 2025-08-12
 */

#include "Swc_LightsControl.h"
#include "Rte_LightsControl.h"

/**
 * @brief Turn on the LED from the application layer.
 *
 * Calls the RTE function to set the LED signal high.
 */
void Swc_Lights_TurnOnLed(void) {
    Rte_TurnOnLed();
}

/**
 * @brief Turn off the relay from the application layer.
 *
 * Calls the RTE function to clear the relay signal.
 */
void Swc_Lights_TurnOffRelay(void) {
    Rte_TurnOffRelay();
}