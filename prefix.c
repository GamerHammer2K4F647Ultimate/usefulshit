#include <stdio.h>
#include <stdarg.h>
#include "prefix.h"
#include "log.h"

int vprintf_with_prefix(const char *prefix, const char *fmt, va_list args)
{
    char text[512];
    char *color = NULL;

    if (prefix == ERR_PREFIX) color = ERR_COLOR;
    else if (prefix == INFO_PREFIX) color = INFO_COLOR;
    else if (prefix == NOTE_PREFIX) color = NOTE_COLOR;
    else if (prefix == WARN_PREFIX) color = WARN_COLOR;

    snprintf(text, sizeof(text), "%s%s%s: %s", color, prefix, CRESET, fmt);
    return vprintf(text, args);
}

int vfprintf_with_prefix(FILE *stream, const char *prefix, const char *fmt, va_list args)
{
    char text[512];
    char *color = NULL;

    if (prefix == ERR_PREFIX) color = ERR_COLOR;
    else if (prefix == INFO_PREFIX) color = INFO_COLOR;
    else if (prefix == NOTE_PREFIX) color = NOTE_COLOR;
    else if (prefix == WARN_PREFIX) color = WARN_COLOR;

    snprintf(text, sizeof(text), "%s%s%s: %s", color, prefix, CRESET, fmt);
    return vfprintf(stream, text, args);
}
