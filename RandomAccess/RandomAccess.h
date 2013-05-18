/**
 * Raspberry IO
 * 
 * RandomAccess
 * 
 * Interface derived from DataInput, DataOutput, Closeable and Seekable.
 */

#ifndef __RASPBERRY_IO_RANDOM_ACCESS_H__
#define __RASPBERRY_IO_RANDOM_ACCESS_H__ 1

#include <DataOutput.h>
#include <DataInput.h>
#include <Closeable.h>
#include <Seekable.h>

class RandomAccess: public virtual DataOutput,
		public virtual DataInput,
		public virtual Closeable,
		public virtual Seekable {
};

#endif /* __RASPBERRY_IO_RANDOM_ACCESS_H__ */
