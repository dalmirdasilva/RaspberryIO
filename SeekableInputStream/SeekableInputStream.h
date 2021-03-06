/**
 * Raspberry IO
 * 
 * SeekableInputStream
 */

#ifndef __RASPBERRY_IO_SEEKABLE_INPUT_STREAM_H__
#define __RASPBERRY_IO_SEEKABLE_INPUT_STREAM_H__ 1

#include <Seekable.h>
#include <InputStream.h>

class SeekableInputStream: public virtual Seekable, public virtual InputStream {
public:

};

#endif /* __RASPBERRY_IO_SEEKABLE_INPUT_STREAM_H__ */
