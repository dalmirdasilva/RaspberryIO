/**
 * Raspberry IO
 * 
 * SerialInputStream
 *
 * A SerialInputStream obtains input bytes from a serial port.
 */

#ifndef __RASPBERRY_IO_SERIAL_INPUT_STREAM_H__
#define __RASPBERRY_IO_SERIAL_INPUT_STREAM_H__ 1

#include <InputStream.h>
//#include <Raspberry.h>
#include <InputStream.h>
#include <fcntl.h>
#include <termios.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


class SerialInputStream: public InputStream {


	/**
	 * File description.
	 */
    int fd;

    /**
     * Internal control.
     */
    int tmp;

public:

    enum BoudRate {
    	BR_50 = B50,
		BR_75 = B75,
		BR_110 = B110,
		BR_134 = B134,
		BR_150 = B150,
		BR_200 = B200,
		BR_300 = B300,
		BR_600 = B600,
		BR_1200 = B1200,
		BR_1800 = B1800,
		BR_2400 = B2400,
		BR_4800 = B4800,
		BR_9600 = B9600,
		BR_19200 = B19200,
		BR_38400 = B38400,
		BR_57600 = B57600,
		BR_115200 = B115200,
		BR_230400 = B230400,
		BR_460800 = B460800,
		BR_500000 = B500000,
		BR_576000 = B576000,
		BR_921600 = B921600,
		BR_1000000 = B1000000,
		BR_1152000 = B1152000,
		BR_1500000 = B1500000,
		BR_2000000 = B2000000,
		BR_2500000 = B2500000,
		BR_3000000 = B3000000,
		BR_3500000 = B3500000,
		BR_4000000 = B4000000
    };

	/**
	 * Public constructor.
	 *
	 * @param boundRate
	 */
	SerialInputStream(const char *dev, BoudRate boundRate);

	/**
	 * Returns the number of bytes that can be read(or skipped over) from this
	 * input stream without blocking by the next caller of a method for this input stream.
	 */
	virtual int available();

	/**
	 * Reads the next unsigned char of data from the input stream.
	 */
	virtual int read();

	/**
	 * Reads some number of bytes from the input stream and stores them into
	 * the buffer array b.
	 */
	virtual int read(unsigned char* b, int len);
};

#endif /* __RASPBERRY_IO_SERIAL_INPUT_STREAM_H__ */
