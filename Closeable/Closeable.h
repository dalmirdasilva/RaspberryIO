/**
 * Raspberry IO
 * 
 * Closeable
 *
 * A Closeable is a source or destination of data that can be closed.
 */

#ifndef __RASPBERRY_IO_CLOSEABLE_H__
#define __RASPBERRY_IO_CLOSEABLE_H__ 1

class Closeable {
public:

	virtual ~Closeable() {
	}

	virtual void close() = 0;
};

#endif /* __RASPBERRY_IO_CLOSEABLE_H__ */
