#ifndef	_GET_FILE_CREATED_TIME_H_
#define _GET_FILE_CREATED_TIME_H_

#include <io.h>
#include <sys\stat.h> 
#include <stdio.h> 
#include <time.h> 
#include <iostream>

class File_Time{

public:
	int year;
	int month;
	int day;

	int hour;
	int minute;
	int second;

	void getFilecreatedtime(std::string filename);

private:
	char buf[65];
	FILE *stream; 
};



#endif