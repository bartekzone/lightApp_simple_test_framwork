/**
 * @file main.c
 * @brief Main application entry point for light control.
 *
 * This file contains the main function for the application, demonstrating
 * the use of the Swc_LightsControl module to turn on the LED and turn off the relay.
 *
 * @author Bartek
 * @date 2025-08-25
 */

#include "Swc_LightsControl.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * @brief Main function of the application.
 *
 * Turns on the LED and turns off the relay using the Swc_LightsControl module.
 *
 * @return int Status code.
 */
int main(void) {

    Swc_Lights_TurnOnLed();
    Swc_Lights_TurnOffRelay(); 
    return 0;
}