#include <stdio.h>
#include <stdarg.h>
#include "ansicolor.h"
#include "log.h"
#include "prefix.h"


int log_err(const char *fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    int ret = vprintf_with_prefix(ERR_PREFIX, fmt, args);
    va_end(args);
    return ret;
}

int log_inf(const char *fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    int ret = vprintf_with_prefix(INFO_PREFIX, fmt, args);
    va_end(args);
    return ret;
}

int log_warn(const char *fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    int ret = vprintf_with_prefix(WARN_PREFIX, fmt, args);
    va_end(args);
    return ret;
}

int log_note(const char *fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    int ret = vprintf_with_prefix(NOTE_PREFIX, fmt, args);
    va_end(args);
    return ret;
}


int flog_err(FILE *stream, const char *fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    int ret = vfprintf_with_prefix(stream, ERR_PREFIX, fmt, args);
    va_end(args);
    return ret;
}

int flog_inf(FILE *stream, const char *fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    int ret = vfprintf_with_prefix(stream, INFO_PREFIX, fmt, args);
    va_end(args);
    return ret;
}

int flog_warn(FILE *stream, const char *fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    int ret = vfprintf_with_prefix(stream, WARN_PREFIX, fmt, args);
    va_end(args);
    return ret;
}

int flog_note(FILE *stream, const char *fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    int ret = vfprintf_with_prefix(stream, NOTE_PREFIX, fmt, args);
    va_end(args);
    return ret;
}
