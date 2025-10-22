# Makefile simple application with tests
# CC - compiler C
CC = gcc

# CFLAGS - compiler flags
# -Wall - enable all warnings
CFLAGS = -Wall -Wextra -std=c99 -IAPP -IBSW/GPIO -IBSW/DET -IMCAL -IRTE -IProjectConfig -ITesting -IUNITY

# SRC_APP - source files for the main application
# These files are the main application source files
SRC_APP = \
    main.c \
    APP/Swc_LightsControl.c \
    BSW/GPIO/Gpio.c \
    BSW/GPIO/Gpio_Cfg.c \
    BSW/DET/ErrorHandler.c \
    MCAL/Dio.c \
    RTE/Rte_LightsControl.c

# Source files for tests
SRC_TEST_MANUAL = \
    Testing/main_test.c \
    Testing/test_gpio.c

# Name of the target application and test executables
# TARGET_APP - name of the main application executable 
# TARGET_TEST_MANUAL - name of the manual test executable
TARGET_APP = app_main
TARGET_TEST_MANUAL = app_test_manual

# Default target
# This is the target that will be built when you run 'make' without arguments
all: $(TARGET_APP)

# Define the targets for the application
# This target will be built when you run 'make' or 'make app'
app: $(TARGET_APP)

# Define the targets for the manual tests
# This target will be built when you run 'make test' or 'make test_manual'
test: test_manual

# Define the target for manual tests
test_manual: $(TARGET_TEST_MANUAL)

# Rules to build the application and test executables
# The $^ variable represents all the prerequisites (source files)
# The $@ variable represents the target name
# The $(CC) variable is the compiler command   
# The $(CFLAGS) variable contains the compiler flags
# The -o option specifies the output file name  
$(TARGET_APP): $(SRC_APP)
	$(CC) $(CFLAGS) $^ -o $@

# The test executable depends on the test source files and the application source files
# This allows the test to use the same source files as the application
$(TARGET_TEST_MANUAL): $(SRC_TEST_MANUAL) BSW/GPIO/Gpio.c BSW/GPIO/Gpio_Cfg.c BSW/DET/ErrorHandler.c MCAL/Dio.c RTE/Rte_LightsControl.c APP/Swc_LightsControl.c
	$(CC) $(CFLAGS) $^ -o $@

# Clean target
# This target will remove the compiled application and test executables
clean:
	rm -f $(TARGET_APP) $(TARGET_TEST_MANUAL)
