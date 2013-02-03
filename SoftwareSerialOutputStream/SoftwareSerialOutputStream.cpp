/**
 * Arduino IO
 * 
 * SoftwareSerialOutputStream
 *
 * A software serial output stream is a output stream to write in a serial port.
 */

#ifndef __RASPBERRY_IO_SOFTWARE_SERIAL_OUTPUT_STREAM_CPP__
#define __RASPBERRY_IO_SOFTWARE_SERIAL_OUTPUT_STREAM_CPP__ 1

#include "SoftwareSerialOutputStream.h"

SoftwareSerialOutputStream::SoftwareSerialOutputStream(SoftwareSerial *serial,
        unsigned int boundRate) :
        serial(serial) {
    serial->begin(boundRate);
}

void SoftwareSerialOutputStream::write(unsigned char b) {
    serial->write(b);
}

#endif /* __RASPBERRY_IO_SOFTWARE_SERIAL_OUTPUT_STREAM_CPP__ */
