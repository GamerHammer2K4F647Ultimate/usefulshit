#ifndef _PREFIX_H
#define _PREFIX_H

#include <stdio.h>
#include <stdarg.h>

#ifdef __cplusplus
extern "C" {
#endif

#define ERR_PREFIX "ERROR"
#define INFO_PREFIX "INFO"
#define WARN_PREFIX "WARN"
#define NOTE_PREFIX "NOTE"

int vprintf_with_prefix(const char *prefix, const char *fmt, va_list args);
int vfprintf_with_prefix(FILE *stream, const char *prefix, const char *fmt, va_list args);

#ifdef __cplusplus
}
#endif

#endif
