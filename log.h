#ifndef _LOG_H
#define _LOG_H

#include <stdio.h>
#include <stdarg.h>
#include <ansicolor.h>

#include "prefix.h"

#ifdef __cplusplus
extern "C" {
#endif
    
#define ERR_COLOR BRED
#define INFO_COLOR BBLU
#define WARN_COLOR BYEL
#define NOTE_COLOR BGRN
#define TEXT_COLOR CRESET

// Logs to stdout
int log_err(const char *fmt, ...);
int log_inf(const char *fmt, ...);
int log_warn(const char *fmt, ...);
int log_note(const char *fmt, ...);

// Logs to specified stream
int flog_err(FILE *stream, const char *fmt, ...);
int flog_inf(FILE *stream, const char *fmt, ...);
int flog_warn(FILE *stream, const char *fmt, ...);
int flog_note(FILE *stream, const char *fmt, ...);
#ifdef __cplusplus
}
#endif

#endif
