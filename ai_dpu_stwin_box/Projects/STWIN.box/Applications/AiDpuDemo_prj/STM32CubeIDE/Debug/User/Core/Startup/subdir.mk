################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
/Users/leonardoiacussi/eai-polimi/ai_dpu_stwin_box/Projects/STWIN.box/Applications/AiDpuDemo_prj/Core/Startup/startup_stm32u585aiixq.s 

C_SRCS += \
../Startup/syscalls.c 

OBJS += \
./User/Core/Startup/startup_stm32u585aiixq.o \
./User/Core/Startup/syscalls.o 

S_DEPS += \
./User/Core/Startup/startup_stm32u585aiixq.d 

C_DEPS += \
./User/Core/Startup/syscalls.d 


# Each subdirectory must supply rules for building sources it contributes
User/Core/Startup/startup_stm32u585aiixq.o: /Users/leonardoiacussi/eai-polimi/ai_dpu_stwin_box/Projects/STWIN.box/Applications/AiDpuDemo_prj/Core/Startup/startup_stm32u585aiixq.s User/Core/Startup/subdir.mk
	arm-none-eabi-gcc -mcpu=cortex-m33 -g3 -DDEBUG -DUSE_DYNAMIC_MEMORY_ALLOCATION -DTX_SINGLE_MODE_NON_SECURE=1 -c -I../../Core/Inc -x assembler-with-cpp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@" "$<"
User/Core/Startup/syscalls.o: /Users/leonardoiacussi/eai-polimi/ai_dpu_stwin_box/Projects/STWIN.box/Applications/AiDpuDemo_prj/STM32CubeIDE/Startup/syscalls.c User/Core/Startup/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DARM_MATH_CM33 -DSYS_DEBUG -DUSE_DYNAMIC_MEMORY_ALLOCATION -DSYS_TP_MCU_STM32U5 -DDEBUG -DUSE_FULL_ASSERT -DSYS_TRACE=0 -DSYS_DBG_ENABLE_TA4=0 -DTX_INCLUDE_USER_DEFINE_FILE -DTX_SINGLE_MODE_NON_SECURE=1 -DUSE_HAL_DRIVER -DSTM32U585xx -c -I../../Core/Inc -I../../X-CUBE-AI/App -I../../X-CUBE-AI -I../../Core/Inc/services/ai_data_format -I../../mx/Inc -I../../../../../../Projects/eLooM_Components/DPU/Inc -I../../../../../../Projects/eLooM_Components/SensorManager/Inc -I../../../../../../Middlewares/ST/threadx/common/inc -I../../../../../../Middlewares/ST/eLooM/Inc -I../../../../../../Middlewares/ST/STM32_AI_Library/Inc -I../../../../../../Middlewares/ST/STM32_GenericFFT_Library/Inc -I../../../../../../Middlewares/ST/threadx/ports/cortex_m33/gnu/inc -I../../../../../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../../../../../Drivers/STM32U5xx_HAL_Driver/Inc/Legacy -I../../../../../../Drivers/CMSIS/DSP/Include -I../../../../../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../../../../../Drivers/CMSIS/Include -I../../../../../../Drivers/BSP/Components/iis3dwb -I../../../../../../Drivers/BSP/Components/ism330dhcx -O0 -ffunction-sections -fdata-sections -Wall -include ../../Core/Inc/sysconfig.h -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-User-2f-Core-2f-Startup

clean-User-2f-Core-2f-Startup:
	-$(RM) ./User/Core/Startup/startup_stm32u585aiixq.d ./User/Core/Startup/startup_stm32u585aiixq.o ./User/Core/Startup/syscalls.d ./User/Core/Startup/syscalls.o ./User/Core/Startup/syscalls.su

.PHONY: clean-User-2f-Core-2f-Startup
