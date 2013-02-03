/**
 * Arduino IO
 * 
 * SoftwareSerialInputStream
 * 
 * A SoftwareSerialInputStream obtains input bytes from a serial port.
 */

#ifndef __RASPBERRY_IO_SOFTWARE_SERIAL_INPUT_STREAM_CPP__
#define __RASPBERRY_IO_SOFTWARE_SERIAL_INPUT_STREAM_CPP__ 1

#include "SoftwareSerialInputStream.h"

SoftwareSerialInputStream::SoftwareSerialInputStream(SoftwareSerial *serial,
        unsigned int boundRate) :
        serial(serial) {
    serial->begin(boundRate);
}

int SoftwareSerialInputStream::available() {
    serial->available();
}

int SoftwareSerialInputStream::read() {
    return serial->read();
}

#endif /* __RASPBERRY_IO_SOFTWARE_SERIAL_INPUT_STREAM_CPP__ */
