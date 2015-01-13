#include "getTime.h"


using namespace std;


void GETTIME::getTime(string filename){

	struct stat statbuf; 

	if((stream=fopen(filename.c_str(),"r+"))==NULL)
	{
		fprintf(stderr, "Cannot open output file.\n"); 
	}

	stat(filename.c_str(),&statbuf);

	fclose(stream);

	struct   tm*   t=localtime(&statbuf.st_ctime); 

	year=t->tm_year+1900;
	month=t->tm_mon+1;
	day=t->tm_mday;

	hour=t->tm_hour;
	minute=t->tm_min;
	second=t->tm_sec;
}

void GETTIME::getTime(){

	struct tm *tm;

	time_t now;

	now=time(NULL);

	tm=localtime(static_cast<const time_t*>(&now));

	year=tm->tm_year+1900;
	month=tm->tm_mon+1;
	day=tm->tm_mday;

	hour=tm->tm_hour;
	minute=tm->tm_min;
	second=tm->tm_sec;
}


int main()
{
	GETTIME ftime,ltime;

	string filename="d:/test.txt";

	ftime.getTime(filename);

	ltime.getTime();

	return 0;
}