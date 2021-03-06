/**
 * Raspberry IO
 * 
 * ExternalEepromInputStream
 * 
 * An ExternalEepromInputStream obtains input bytes from a 
 * externalEeprom. 
 */

#ifndef __RASPBERRY_IO_EXTERNAL_EEPROM_INPUT_STREAM_CPP__
#define __RASPBERRY_IO_EXTERNAL_EEPROM_INPUT_STREAM_CPP__ 1

#include "ExternalEepromInputStream.h"

ExternalEepromInputStream::ExternalEepromInputStream(
		ExternalEeprom* externalEeprom) :
		externalEeprom(externalEeprom) {
	markpos = 0;
	pos = 0;
	externalEepromSize = externalEeprom->getDeviceSize();
}

int ExternalEepromInputStream::available() {
	if (externalEepromSize > pos) {
		return 1;
	}
	return 0;
}

void ExternalEepromInputStream::mark() {
	markpos = pos;
}

bool ExternalEepromInputStream::markSupported() {
	return true;
}

int ExternalEepromInputStream::read() {
	if (pos >= externalEepromSize) {
		return -1;
	}
	return (int) externalEeprom->read(pos++);
}

int ExternalEepromInputStream::read(unsigned char* b, int off, int len) {
	unsigned int available = (externalEepromSize - pos);
	int cnt;
	len = (int) ((unsigned int) len > available) ? available : len;
	cnt = externalEeprom->readBytes(pos, &b[off], len);
	pos += cnt;
	return cnt;
}

void ExternalEepromInputStream::reset() {
	pos = markpos;
}

#endif /* __RASPBERRY_IO_EXTERNAL_EEPROM_INPUT_STREAM_CPP__ */
