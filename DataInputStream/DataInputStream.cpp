/**
 * Raspberry IO
 * 
 * DataInputStream
 *
 * A data input stream lets an application read data from a InputStream.
 */

#ifndef __RASPBERRY_IO_DATA_INPUT_STREAM_CPP__
#define __RASPBERRY_IO_DATA_INPUT_STREAM_CPP__ 1

#include "DataInputStream.h"

DataInputStream::DataInputStream(InputStream* inputStream) :
		inputStream(inputStream) {
}

unsigned char DataInputStream::readByte() {
	return (unsigned char) inputStream->read();
}

bool DataInputStream::readBoolean() {
	return (bool) inputStream->read();
}

char DataInputStream::readChar() {
	return (char) inputStream->read();
}

unsigned char DataInputStream::readUnsignedChar() {
	return (unsigned char) inputStream->read();
}

int DataInputStream::readInt() {
	int v = 0;
	v = inputStream->read();
	v <<= 8;
	v |= (inputStream->read() & 0xff);
	return v;
}

unsigned int DataInputStream::readUnsignedInt() {
	return (unsigned int) readInt();
}

long DataInputStream::readLong() {
	long v = 0;
	v = inputStream->read();
	v <<= 8;
	v |= (inputStream->read() & 0xff);
	v <<= 8;
	v |= (inputStream->read() & 0xff);
	v <<= 8;
	v |= (inputStream->read() & 0xff);
	return v;
}

unsigned long DataInputStream::readUnsignedLong() {
	return (unsigned long) readLong();
}

float DataInputStream::readFloat() {
	return (float) readLong();
}

double DataInputStream::readDouble() {
	return (double) readLong();
}

void DataInputStream::readFully(unsigned char* b, int len) {
	for (int i = 0; i < len; i++) {
		b[i] = inputStream->read();
	}
}

unsigned int DataInputStream::skipBytes(unsigned int n) {
	return inputStream->skip(n);
}

#endif /* __RASPBERRY_IO_DATA_INPUT_STREAM_CPP__ */
