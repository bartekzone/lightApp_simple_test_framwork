/**
 * @file ErrorHandler.c
 * @brief Development Error Tracer (DET) service implementation.
 *
 * This file implements error reporting functions for development error tracing.
 * 
 * @author Bartekzone
 * @date 2025-08-12
 */
//*********************  Error/ErrorHandler.c  *********************//
// DET — Development Error Tracer

#include "ErrorHandler.h"
#include <stdio.h>
/**
 * @brief Report an error code.
 *
 * Reports the specified error code for tracing and debugging purposes.
 *
 * @param code The error code to report.
 */
void Error_Report(ErrorCode_t code) {
    switch(code) {
        case ERROR_GPIO_FAILURE:
            printf("[ERROR] GPIO failure\n");
            break;
        default:
            printf("[ERROR] Unknown error\n");
    }
}