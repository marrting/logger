#include "log.h"

/**
 * @func logger
 * @parm level - log level
 * @param filename - file name
 * @param line - line of the code
 * @param format - message format
 * @param ... - args
 * @return void
 */
void logger(const char* level,const char* filename,const char* funcname,int line,const char* format, ...){
	time_t timer = time(NULL);
	struct tm * time_fmt = localtime(&timer);

	va_list args;

	printf("%d/%02d/%02d %02d:%02d:%02d %s\033[0m %s:%s:%d: ",
			time_fmt->tm_year + 1900,
			time_fmt->tm_mon + 1,
			time_fmt->tm_mday,
			time_fmt->tm_hour,
			time_fmt->tm_min,
			time_fmt->tm_sec,
			level,filename,funcname,line);

	va_start(args, format);
	vprintf(format,args);
	va_end(args);
	printf("\n");
}

