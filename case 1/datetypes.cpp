/*
filename: datetypes.cpp
details: Program to parse the command line and dispaly the output
author:Rajya lakshmi
date:13/04/2020
*/

#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<typeinfo>
using namespace std;
bool check(string str)
{
int inumb;
for(inumb=0;str.length()==1;inumb++)
{
return true;
}
}	
int main(int argc,char *argv[])
{
int inum1;
int inum2;
float fnumb;
if (argc==2)
{
cout<<"usageof filenam"<<endl;
cout<<argv[0]<<"datatype1 datatype2 .... datatypeN "<<endl;    	}
	else
	{
for(inum1=1;inum1<argc;inum1++)
{
inum2=atoi(argv[inum1]);
fnumb=atof(argv[inum1]);
if(inum2==0)
{
	if(check(argv[inum1]))
	{
	cout<<"char";
	cout<<"\t"<<argv[inum1]<< "\t"<<strlen(argv[inum1])<<endl;
	}
	else
	{
	cout<<"string";
	cout<<"\t"<<argv[inum1]<< "\t"<<sizeof(argv[inum1])<<endl;
	}
}
else
{
if(inum2==fnumb)
cout<<"int"<< "\t"<<inum2<<"\t"<<sizeof(inum2)<<endl;
else
cout<<"float"<< "\t"<<fnumb<<"\t"<<sizeof(fnumb)<<endl;
}
}
return 0;
}
}
