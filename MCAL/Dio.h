/**
 * @file Dio.h
 * @brief Direct control of hardware (MCAL/HAL).
 *
 * This file provides functions for direct manipulation of hardware pins.
 * 
 * @author Bartekzone
 * @date 2025-08-12
 */
#ifndef DIO_H
#define DIO_H

#include <stdbool.h>
#include <stdint.h>
/**
 * @brief Write a value to a hardware pin.
 *
 * Sets the specified pin to the given state.
 *
 * @param pin The hardware pin number.
 * @param state The state to set (true for high, false for low).
 */
void Dio_Write(uint8_t pin, bool state);

#endif