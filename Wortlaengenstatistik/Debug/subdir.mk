################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../countWordLen.c \
../mainWortlaengenstatistik.c 

C_DEPS += \
./countWordLen.d \
./mainWortlaengenstatistik.d 

OBJS += \
./countWordLen.o \
./mainWortlaengenstatistik.o 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean--2e-

clean--2e-:
	-$(RM) ./countWordLen.d ./countWordLen.o ./mainWortlaengenstatistik.d ./mainWortlaengenstatistik.o

.PHONY: clean--2e-

