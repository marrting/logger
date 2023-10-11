#include "../src/log.h"

int main(){
	LOG(INFO,"this is info log");
	LOG(DEBUG,"this is debug log");
	LOG(WARN,"this is warn log");
	LOG(ERROR,"this is error log");

	LOG(ERROR,"this is error log\n %s","hello world");
}
