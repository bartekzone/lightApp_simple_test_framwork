#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <assert.h>
#include "Gpio_Cfg.h"
#include "Gpio.h"
#include "ErrorHandler.h"

void test_gpio_set_valid_led(void) {
    bool result = gpio_set(GPIO_SIGNAL_LED);
    assert(result == true);
}

void test_gpio_set_invalid(void) {
    bool result = gpio_set(GPIO_SIGNAL_COUNT); // out of range
    assert(result == false);
}