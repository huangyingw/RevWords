// RevWords.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

void RevWords(char *source)
{
	while(*source==' ')
		source++;
	char *result=source;
	do
	{
		result++;
	}while(*result!=' '&&*result!='\0');
	
	if('\0'!=*result)
	{
		RevWords(result);
	}
	while(source<result)
		cout<<*source++;
	cout<<" ";
	return;
}

int _tmain(int argc, _TCHAR* argv[])
{
	char source[]="I Love You";
	RevWords(source);
	cout<<endl;
	return 0;
}

