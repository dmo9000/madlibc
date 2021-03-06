#ifndef __STDDEF_H__
#define __STDDEF_H__
#include <stdint.h>

typedef uint32_t size_t;
typedef long ssize_t;
typedef int32_t off_t;
typedef long ptrdiff_t;

#ifndef NULL
#define NULL 0
#endif /* NULL */
#endif /* __STDDEF_H__ */
