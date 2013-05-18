/**
 * Raspberry IO
 * 
 * SerialInputStream
 *
 * A SerialInputStream obtains input bytes from a serial port.
 */

#ifndef __RASPBERRY_IO_SERIAL_INPUT_STREAM_CPP__
#define __RASPBERRY_IO_SERIAL_INPUT_STREAM_CPP__ 1

#include "SerialInputStream.h"

SerialInputStream::SerialInputStream(const char *dev, BoudRate boudRate) {
	struct termios options;
	tmp = -1;
	fd = open(dev, O_RDONLY | O_NOCTTY | O_NONBLOCK);
	if (fd == -1) {
		perror("Unable to open port.");
		exit(1);
	}
	tcgetattr(fd, &options);
	cfsetispeed(&options, (speed_t)boudRate);
	cfsetospeed(&options, (speed_t)boudRate);
	options.c_cflag |= (CLOCAL | CREAD);
	options.c_cflag |= PARENB;
	options.c_cflag |= PARODD;
	options.c_cflag &= ~CSTOPB;
	options.c_cflag &= ~CSIZE;
	options.c_cflag |= CS8;
	options.c_iflag |= (INPCK | ISTRIP);
	tcsetattr(fd, TCSANOW, &options);
	fcntl(fd, F_SETFL, FNDELAY);
}

int SerialInputStream::available() {
	int b;
	int n = ::read(fd, &b, 1);
	if (n <= 0) {
		b = -1;
		return 0;
	}
	return 1;
}

int SerialInputStream::read() {
	int b;
	if (tmp != -1) {
		b = tmp;
		tmp = -1;
	} else {
		int n = ::read(fd, &b, 1);
		if (n <= 0) {
			return -1;
		}
	}
	return b;
}

int SerialInputStream::read(unsigned char* b, int len) {
	return (int) ::read (fd, b, len);
}

#endif /* __RASPBERRY_IO_SERIAL_INPUT_STREAM_CPP__ */
