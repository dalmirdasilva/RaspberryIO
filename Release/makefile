################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include WireOutputSream/subdir.mk
-include WireInputStream/subdir.mk
-include SerialOutputStream/subdir.mk
-include SerialInputStream/subdir.mk
-include SeekableInputStream/subdir.mk
-include Seekable/subdir.mk
-include ResourceSeekableInputStream/subdir.mk
-include ResourceOutputStream/subdir.mk
-include ResourceInputStream/subdir.mk
-include RandomAccessResource/subdir.mk
-include RandomAccessExternalEeprom/subdir.mk
-include RandomAccessByteArray/subdir.mk
-include RandomAccess/subdir.mk
-include OutputStream/subdir.mk
-include InputStream/subdir.mk
-include FilterOutputStream/subdir.mk
-include FilterInputStream/subdir.mk
-include ExternalEepromSeekableInputStream/subdir.mk
-include ExternalEepromOutputStream/subdir.mk
-include ExternalEepromInputStream/subdir.mk
-include DataOutputStream/subdir.mk
-include DataOutput/subdir.mk
-include DataInputStream/subdir.mk
-include DataInput/subdir.mk
-include Closeable/subdir.mk
-include ByteArraySeekableInputStream/subdir.mk
-include ByteArrayOutputStream/subdir.mk
-include ByteArrayInputStream/subdir.mk
-include BufferedOutputStream/subdir.mk
-include BufferedInputStream/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: libRaspberryIO.a

# Tool invocations
libRaspberryIO.a: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GCC Archiver'
	arm-linux-gnueabihf-ar -r  "libRaspberryIO.a" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(C++_DEPS)$(C_DEPS)$(CC_DEPS)$(ARCHIVES)$(CPP_DEPS)$(CXX_DEPS)$(C_UPPER_DEPS) libRaspberryIO.a
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
