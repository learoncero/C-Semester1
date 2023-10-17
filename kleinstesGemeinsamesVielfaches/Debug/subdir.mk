################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../kleinstesGemeinsamesVielfaches.c \
../mainKleinstesGemeinsamesVielfaches.c 

C_DEPS += \
./kleinstesGemeinsamesVielfaches.d \
./mainKleinstesGemeinsamesVielfaches.d 

OBJS += \
./kleinstesGemeinsamesVielfaches.o \
./mainKleinstesGemeinsamesVielfaches.o 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean--2e-

clean--2e-:
	-$(RM) ./kleinstesGemeinsamesVielfaches.d ./kleinstesGemeinsamesVielfaches.o ./mainKleinstesGemeinsamesVielfaches.d ./mainKleinstesGemeinsamesVielfaches.o

.PHONY: clean--2e-

