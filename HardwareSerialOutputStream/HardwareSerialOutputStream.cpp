/**
 * Arduino IO
 * 
 * HardwareSerialOutputStream
 *
 * A software serial output stream is a output stream to write in a serial port.
 */

#ifndef __RASPBERRY_IO_HARDWARE_SERIAL_OUTPUT_STREAM_CPP__
#define __RASPBERRY_IO_HARDWARE_SERIAL_OUTPUT_STREAM_CPP__ 1

#include "HardwareSerialOutputStream.h"

HardwareSerialOutputStream::HardwareSerialOutputStream(unsigned int boundRate) {
    Serial.begin(9600);
}

void HardwareSerialOutputStream::write(unsigned char b) {
    Serial.write(b);
}

#endif /* __RASPBERRY_IO_HARDWARE_SERIAL_OUTPUT_STREAM_CPP__ */
