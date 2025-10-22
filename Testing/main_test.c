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
void test_gpio_set_invalid(void);
// ----------------------

// Entry point for tests
void run_all_tests(void) {
    RUN_TEST(test_gpio_set_valid_led);
    RUN_TEST(test_gpio_set_invalid);
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