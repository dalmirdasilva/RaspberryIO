/**
 * Raspberry IO
 * 
 * RandomAccessByteArray
 * 
 * Instances of this class support both reading and writing to a random access 
 * unsigned char array.
 */

#ifndef __RASPBERRY_IO_RANDOM_ACCESS_BYTE_ARRAY_CPP__
#define __RASPBERRY_IO_RANDOM_ACCESS_BYTE_ARRAY_CPP__ 1

#include "RandomAccessByteArray.h"

RandomAccessByteArray::RandomAccessByteArray(unsigned char* buf,
		unsigned int count) :
		buf(buf), count(count) {
	pos = 0;
}

unsigned int RandomAccessByteArray::length() {
	return count;
}

void RandomAccessByteArray::seek(unsigned int pos) {
	this->pos = pos;
}

void RandomAccessByteArray::close() {
}

void RandomAccessByteArray::write(unsigned char* b, int len) {
	writeBytes(b, len);
}

void RandomAccessByteArray::write(unsigned char b) {
	buf[pos++] = b;
}

void RandomAccessByteArray::writeByte(unsigned char b) {
	buf[pos++] = b;
}

void RandomAccessByteArray::writeBytes(unsigned char* b, int len) {
	for (int i = 0; i < len; i++) {
		buf[pos++] = b[i];
	}
}

void RandomAccessByteArray::writeBoolean(bool v) {
	buf[pos++] = (unsigned char) v;
}

void RandomAccessByteArray::writeChar(char c) {
	buf[pos++] = (unsigned char) c;
}

void RandomAccessByteArray::writeUnsignedChar(unsigned char c) {
	buf[pos++] = (unsigned char) c;
}

void RandomAccessByteArray::writeInt(int v) {
	buf[pos++] = (unsigned char) ((v >> 8) & 0xff);
	buf[pos++] = (unsigned char) (v & 0xff);
}

void RandomAccessByteArray::writeUnsignedInt(unsigned int v) {
	writeInt((int) v);
}

void RandomAccessByteArray::writeLong(long v) {
	buf[pos++] = (unsigned char) ((v >> 24) & 0xff);
	buf[pos++] = (unsigned char) ((v >> 16) & 0xff);
	buf[pos++] = (unsigned char) ((v >> 8) & 0xff);
	buf[pos++] = (unsigned char) (v & 0xff);
}

void RandomAccessByteArray::writeUnsignedLong(unsigned long v) {
	writeLong((long) v);
}

void RandomAccessByteArray::writeFloat(float v) {
	writeLong((long) v);
}

void RandomAccessByteArray::writeDouble(double v) {
	writeLong((long) v);
}

unsigned char RandomAccessByteArray::readByte() {
	return buf[pos++];
}

bool RandomAccessByteArray::readBoolean() {
	return (bool) buf[pos++];
}

char RandomAccessByteArray::readChar() {
	return (char) buf[pos++];
}

unsigned char RandomAccessByteArray::readUnsignedChar() {
	return (unsigned char) buf[pos++];
}

int RandomAccessByteArray::readInt() {
	int v = 0;
	v = buf[pos++];
	v <<= 8;
	v |= buf[pos++];
	return v;
}

unsigned int RandomAccessByteArray::readUnsignedInt() {
	return (unsigned int) readInt();
}

long RandomAccessByteArray::readLong() {
	long v = 0;
	v = (buf[pos++] & 0xff);
	v <<= 8;
	v |= (buf[pos++] & 0xff);
	v <<= 8;
	v |= (buf[pos++] & 0xff);
	v <<= 8;
	v |= (buf[pos++] & 0xff);
	return v;
}

unsigned long RandomAccessByteArray::readUnsignedLong() {
	return (unsigned long) readLong();
}

float RandomAccessByteArray::readFloat() {
	return (float) readLong();
}

double RandomAccessByteArray::readDouble() {
	return (double) readLong();
}

void RandomAccessByteArray::readFully(unsigned char* b, int len) {
	for (int i = 0; i < len; i++) {
		b[i] = buf[pos++];
	}
}

unsigned int RandomAccessByteArray::skipBytes(unsigned int n) {
	unsigned int skipped;
	unsigned int newpos;
	newpos = pos + n;
	if (newpos > count) {
		newpos = count;
	}
	skipped = newpos - pos;
	pos = newpos;
	return skipped;
}

#endif /* __RASPBERRY_IO_RANDOM_ACCESS_BYTE_ARRAY_CPP__ */
