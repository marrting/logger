#ifndef _LOG_H
#define _LOG_H

#include <stdio.h>
#include <stdarg.h>
#include <time.h>

#define INFO "\033[34m[INFO]"
#define DEBUG "\033[32m[DEBUG]"
#define WARN "\033[33m[WARN]"
#define ERROR "\033[31m[ERROR]"
#define LOG(level,fmt,args...) logger(level,__FILE__,__func__,__LINE__, fmt, ##args)

void logger(const char* level,const char* filename,const char* funcname, int line, const char* format, ...);

#endif //_LOG_H

