#include "Str.h"
#include <iostream>
#include <string.h>
Str::Str(int leng)
{
	if (leng<0)
	{
		cout<<"size is negative"<<endl;
	}
	else
	{
		str = new char[leng];
		len=leng;
	}
} // leng 은 string의 길이.       
Str::Str(char *neyong)
{
	int i;
	len=strlen(neyong);
	str = new char[len];
	strcpy(str,neyong);
} // neyong은 초기화할 내용이 들어감.
Str::~Str()
{
	delete(str);
} // 소멸자.        
int Str::length(void)
{
	return len;
} // string의 길이를 리턴하는 함수.         
char* Str::contents(void)
{
	return str;
} // string의 내용을 리턴하는 함수.       
int Str::compare(class Str& a)
{
	return strcmp(a,str);
} // a의 내용과 strcmp.        
int Str::compare(char *a)
{
	return strcmp(a,str);
} // a의 내용과 strcmp.        
void Str::operator=(char *a)
{
	static int j;
	j=strlen(a);
	str = new char[len+j];
	strcat(str,a);
} // string의 값을 대입.        
void Str::operator=(class Str& a)
{
	static int k;
        k=strlen(a);
        str = new char[len+j];
        strcat(str,a);

} // Str의 내용을 대입.


