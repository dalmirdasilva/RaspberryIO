################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../ResourceInputStream/ResourceInputStream.cpp 

OBJS += \
./ResourceInputStream/ResourceInputStream.o 

CPP_DEPS += \
./ResourceInputStream/ResourceInputStream.d 


# Each subdirectory must supply rules for building sources it contributes
ResourceInputStream/%.o: ../ResourceInputStream/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	arm-linux-gnueabihf-g++ -I/opt/raspberrypi/tools/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian/lib/gcc/arm-linux-gnueabihf/4.7.2/finclude -I/opt/raspberrypi/tools/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian/lib/gcc/arm-linux-gnueabihf/4.7.2/include -I/opt/raspberrypi/tools/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian/lib/gcc/arm-linux-gnueabihf/4.7.2/include-fixed -I/opt/raspberrypi/tools/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian/arm-linux-gnueabihf/libc/usr/include -I/opt/raspberrypi/tools/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian/arm-linux-gnueabihf/include -I"/storage/raspberry/driver/peripheral/Wire" -I"/storage/raspberry/driver/peripheral/Bcm2835" -I"/storage/raspberry/library/io/BufferedInputStream" -I"/storage/raspberry/library/io/BufferedOutputStream" -I"/storage/raspberry/library/io/ByteArrayInputStream" -I"/storage/raspberry/library/io/ByteArrayOutputStream" -I"/storage/raspberry/library/io/ByteArraySeekableInputStream" -I"/storage/raspberry/library/io/Closeable" -I"/storage/raspberry/library/io/DataInput" -I"/storage/raspberry/library/io/DataInputStream" -I"/storage/raspberry/library/io/DataOutput" -I"/storage/raspberry/library/io/DataOutputStream" -I"/storage/raspberry/library/io/ExternalEepromInputStream" -I"/storage/raspberry/library/io/ExternalEepromOutputStream" -I"/storage/raspberry/library/io/ExternalEepromSeekableInputStream" -I"/storage/raspberry/library/io/FilterInputStream" -I"/storage/raspberry/library/io/FilterOutputStream" -I"/storage/raspberry/library/io/InputStream" -I"/storage/raspberry/library/io/OutputStream" -I"/storage/raspberry/library/io/RandomAccess" -I"/storage/raspberry/library/io/RandomAccessByteArray" -I"/storage/raspberry/library/io/RandomAccessExternalEeprom" -I"/storage/raspberry/library/io/RandomAccessResource" -I"/storage/raspberry/library/io/ResourceInputStream" -I"/storage/raspberry/library/io/ResourceOutputStream" -I"/storage/raspberry/library/io/ResourceSeekableInputStream" -I"/storage/raspberry/library/io/Seekable" -I"/storage/raspberry/library/io/SeekableInputStream" -I"/storage/raspberry/library/io/SerialInputStream" -I"/storage/raspberry/library/io/SerialOutputStream" -I"/storage/raspberry/library/io/WireInputStream" -I"/storage/raspberry/library/io/WireOutputSream" -I"/storage/raspberry/driver/memory/External24cl256Eeprom" -I"/storage/raspberry/driver/memory/External24x16Eeprom" -I"/storage/raspberry/driver/memory/ExternalByteArrayEeprom" -I"/storage/raspberry/driver/memory/ExternalEeprom" -I"/storage/raspberry/driver/memory/ExternalFileEeprom" -I"/storage/raspberry/driver/memory/ExternalMappedEeprom" -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


