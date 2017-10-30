################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Laboratorio\ 6.cpp 

OBJS += \
./src/Laboratorio\ 6.o 

CPP_DEPS += \
./src/Laboratorio\ 6.d 


# Each subdirectory must supply rules for building sources it contributes
src/Laboratorio\ 6.o: ../src/Laboratorio\ 6.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Laboratorio 6.d" -MT"src/Laboratorio\ 6.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


