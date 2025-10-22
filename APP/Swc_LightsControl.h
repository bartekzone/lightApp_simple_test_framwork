/**
 * @file Swc_LightsControl.h
 * @brief Application software component interface for lights control.
 *
 * This file provides the application-level interface functions for controlling lights,
 * using the RTE interface.
 * 
 * @author Bartekzone
 * @date 2025-08-12
 */

#ifndef SWC_LIGHTS_CONTROL_H
#define SWC_LIGHTS_CONTROL_H

/**
 * @brief Turn on the LED from the application layer.
 *
 * Calls the RTE function to set the LED signal high.
 */
void Swc_Lights_TurnOnLed(void);

/**
 * @brief Turn off the relay from the application layer.
 *
 * Calls the RTE function to clear the relay signal.
 */
void Swc_Lights_TurnOffRelay(void);

#endif