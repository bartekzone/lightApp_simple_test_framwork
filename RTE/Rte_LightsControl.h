/**
 * @file Rte_LightsControl.h
 * @brief RTE interface for lights control.
 *
 * This file provides the runtime environment (RTE) interface functions for controlling lights.
 * 
 * @author Bartekzone
 * @date 2025-08-12
 */

#ifndef RTE_LIGHTS_CONTROL_H
#define RTE_LIGHTS_CONTROL_H

/**
 * @brief Turn on the LED via RTE.
 *
 * Sets the LED signal high. Reports an error if the operation fails.
 */
void Rte_TurnOnLed(void);

/**
 * @brief Turn off the relay via RTE.
 *
 * Clears the relay signal. Reports an error if the operation fails.
 */
void Rte_TurnOffRelay(void);

#endif