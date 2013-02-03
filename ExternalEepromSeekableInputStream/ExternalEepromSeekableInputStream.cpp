/**
 * Arduino IO
 * 
 * ExternalEepromSeekableInputStream
 * 
 * A ExternalEepromSeekableInputStream obtains input bytes from a external
 * input stream. 
 */

#ifndef __RASPBERRY_IO_EXTERNAL_EEPROM_SEEKABLE_INPUT_STREAM_CPP__
#define __RASPBERRY_IO_EXTERNAL_EEPROM_SEEKABLE_INPUT_STREAM_CPP__ 1

#include "ExternalEepromSeekableInputStream.h"

ExternalEepromSeekableInputStream::ExternalEepromSeekableInputStream(
        ExternalEeprom* externalEeprom) :
        ExternalEepromInputStream(externalEeprom) {
}

void ExternalEepromSeekableInputStream::seek(unsigned int pos) {
    this->pos = pos;
}

#endif /* __RASPBERRY_IO_EXTERNAL_EEPROM_SEEKABLE_INPUT_STREAM_CPP__ */
