#include "getFileCreateTime.h"


using namespace std;

void File_Time::getFilecreatedtime(string filename){

	struct stat statbuf; 

	if((stream=fopen(filename.c_str(),"w+"))==NULL)
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