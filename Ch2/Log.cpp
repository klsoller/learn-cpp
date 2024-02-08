
#include <iostream>//	WHY: Used for console I/
#include "Log.h"	


//	Testing a seperate file.
void Log(const char* message)
{
	std::cout << message << '\n';
}


void InitLog()
{
	Log("Initializing Log");
}