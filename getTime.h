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

	void getTime(std::string filename);//��ȡ���ļ����½�ʱ��
	void getTime();//��ȡ����ʱ��
private:
	char buf[65];
	FILE *stream; 
};

#endif