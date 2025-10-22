/**
 * @file ErrorHandler.h
 * @brief Development Error Tracer (DET) service interface.
 *
 * This file provides error codes and reporting functions for development error tracing.
 * 
 * @author Bartekzone
 * @date 2025-08-12
 */
//*********************  Error/ErrorHandler.h  *********************//
// DET — Development Error Tracer services

#ifndef ERROR_HANDLER_H
#define ERROR_HANDLER_H

/**
 * @brief Error codes for DET services.
 */
typedef enum {
    ERROR_NONE,
    ERROR_GPIO_FAILURE,
    ERROR_UNKNOWN
} ErrorCode_t;

/**
 * @brief Report an error code.
 *
 * Reports the specified error code for tracing and debugging purposes.
 *
 * @param code The error code to report.
 */
void Error_Report(ErrorCode_t code);

#endif