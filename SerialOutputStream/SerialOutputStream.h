/**
 * Raspberry IO
 * 
 * SerialOutputStream
 *
 * A serial output stream is a output stream to write in a serial port.
 */

#ifndef __RASPBERRY_IO_SERIAL_OUTPUT_STREAM_H__
#define __RASPBERRY_IO_SERIAL_OUTPUT_STREAM_H__ 1

#include <OutputStream.h>

class SerialOutputStream: public OutputStream {

	/**
	 * Public constructor.
	 *
	 * @param boundRate
	 */
	SerialOutputStream(unsigned int boudRate);

	/**
	 * Writes the specified unsigned char to this output stream.
	 */
	virtual void write(unsigned char b);
};

#endif /* __RASPBERRY_IO_SERIAL_OUTPUT_STREAM_H__ */
