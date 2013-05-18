/**
 * Raspberry IO
 * 
 * Seekable
 */

#ifndef __RASPBERRY_IO_SEEKABLE_H__
#define __RASPBERRY_IO_SEEKABLE_H__ 1

class Seekable {
public:

	virtual ~Seekable() {
	}

	virtual void seek(unsigned int pos) = 0;
};

#endif /* __RASPBERRY_IO_SEEKABLE_H__ */
