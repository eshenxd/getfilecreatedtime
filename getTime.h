#ifndef _GET_TIME_H_
#define _GET_TIME_H_

#include <io.h>
#include <sys\stat.h> 
#include <stdio.h> 
#include <time.h> 
#include <iostream>

class GETTIME
{
public:
	int year;
	int month;
	int day;

	int hour;
	int minute;
	int second;

	void getTime(std::string filename);//获取打开文件的新建时间
	void getTime();//获取本机时间
private:
	char buf[65];
	FILE *stream; 
};

#endif