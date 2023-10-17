################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../clearTemp.c \
../mainHaeufigkeitsanalyse.c \
../readWord.c \
../saveFirstWord.c \
../skipDelimiters.c \
../wordFound.c \
../wordNotFound.c 

C_DEPS += \
./clearTemp.d \
./mainHaeufigkeitsanalyse.d \
./readWord.d \
./saveFirstWord.d \
./skipDelimiters.d \
./wordFound.d \
./wordNotFound.d 

OBJS += \
./clearTemp.o \
./mainHaeufigkeitsanalyse.o \
./readWord.o \
./saveFirstWord.o \
./skipDelimiters.o \
./wordFound.o \
./wordNotFound.o 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean--2e-

clean--2e-:
	-$(RM) ./clearTemp.d ./clearTemp.o ./mainHaeufigkeitsanalyse.d ./mainHaeufigkeitsanalyse.o ./readWord.d ./readWord.o ./saveFirstWord.d ./saveFirstWord.o ./skipDelimiters.d ./skipDelimiters.o ./wordFound.d ./wordFound.o ./wordNotFound.d ./wordNotFound.o

.PHONY: clean--2e-

