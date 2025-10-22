# Project: Create simple framework for unit testing

## Table of Contents
1. [Download the Application Code](#1-download-the-application-code)
2. [Create the Testing Folder](#2-create-the-testing-folder)
3. [Create `test_gpio.c`](#3-create-test_gpioc)
4. [Write the First Test](#4-write-the-first-test)
5. [Create a Test Management File: `main_test.c`](#5-create-a-test-management-file-main_testc)
6. [Update the Makefile](#6-update-the-makefile)
7. [Create new test cases](#6-create-new-testcases)

---

## 1. Download the Application Code
Clone or download the repository containing the Lights application code.
git clone https://github.com/bartekzone/lightApp.git
cd lights-app

The project implements a layered embedded application inspired by the AUTOSAR architecture.  
The codebase is organized into layers: **MCAL**, **BSW**, **RTE**, **APP**, and **ProjectConfig**, to maintain a structured architecture and allow future expansion, testing and launching on board (Nucleo).

It allows run simple tasks, such as controlling an LED.  

This project was created as a learning aid for the course *"C for Advanced Users"* by **UCEGOSU**: [https://cdlazaawansowanych.pl/](https://cdlazaawansowanych.pl/)  
The concept of application layers is based on:  
[https://yoginsavani.com/understanding-autosar-architecture-a-guide-to-automotive-software-integration/](https://yoginsavani.com/understanding-autosar-architecture-a-guide-to-automotive-software-integration/)

---

## 2. Create the Testing Folder
Inside the project root, create a new folder for tests:
    mkdir testing

---

## 3. Create test_gpio.c
We will test functions from gpio module. 
Create the folder and file Testing/test_gpio.c and include the following headers:
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <assert.h>
#include "Gpio_Cfg.h"
#include "Gpio.h"
#include "ErrorHandler.h"

---

## 4. Write the First Test
We will create a simple test that verifies whether setting a valid LED works correctly.
    void test_gpio_set_valid_led(void) {
        bool result = gpio_set(GPIO_SIGNAL_LED);
        assert(result == true);
}
How it works:
- gpio_set(GPIO_SIGNAL_LED) calls the function that sets the LED pin.
- It returns a bool indicating success or failure.
- assert(result == true) ensures the function behaves as expected — if result is not true, the program stops with an assertion failure.

---

## 5. Create a Test Management File: main_test.c
To run multiple tests conveniently, we will create Testing/main_test.c:
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

// ----------------------
// Setting: enable/disable tests
#define ENABLE_TESTS 1
// ----------------------

// Macro to run a test and print the result
#define RUN_TEST(test_fn) \
    do { \
        printf("[RUNNING] %s...\n", #test_fn); \
        test_fn(); \
        printf("[PASSED ] %s\n", #test_fn); \
    } while (0)
// ----------------------

// Declarations of test functions
void test_gpio_set_valid_led(void);

// Entry point for tests
void run_all_tests(void) {
    RUN_TEST(test_gpio_set_valid_led);

    // Add more tests here
}

int main(void) {
#if ENABLE_TESTS
    printf("=== RUNNING UNIT TESTS ===\n");
    run_all_tests();
    printf("=== ALL TESTS PASSED ===\n");
#else
    printf("Tests are disabled. Proceed to application code.\n");
    // Here you can run the application instead of tests
    // e.g. App_Lights_TurnOnLed();
#endif
    return 0;
}

---

## 6. Update the Makefile
We will now be able to build either the application or the tests. The make file was updated with:
-TARGET_APP - name of the main application executable
-TARGET_TEST_MANUAL - name of the manual test executable

Now you can build and run either:

Application:
    make app
And run it by:
    ./app_main

Tests:
    make test_manual
And run test by:
    ./app_test_manual

Test results are printed in MSYS2 MINGW terminal.
---

## 7. Create new test cases
Create new tests for gpio module.
