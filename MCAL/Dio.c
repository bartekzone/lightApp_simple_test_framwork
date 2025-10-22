/**
 * @file Dio.c
 * @brief Implementation of direct hardware control functions (MCAL/HAL).
 *
 * This file contains the implementation of functions for direct manipulation of hardware pins.
 * 
 * @author Bartekzone
 * @date 2025-08-12
 */
#include "Dio.h"
#include <stdio.h>
/**
 * @brief Write a value to a hardware pin.
 *
 * Sets the specified pin to the given state and prints the action.
 *
 * @param pin The hardware pin number.
 * @param state The state to set (true for high, false for low).
 */
void Dio_Write(uint8_t pin, bool state) {
    printf("DIO: pin %d -> %s\n", pin, state ? "HIGH" : "LOW");
}