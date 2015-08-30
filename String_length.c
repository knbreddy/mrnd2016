#include<stdio.h>
#define size 100000
int length(char a[]);
void main()
{
	char a[size], i,l;
	printf("enter the string\n");
	gets(a);

	l = length(a);
	printf("THe length is %d", l);
}

int length(char a[])
{
	int i = 0,len=0;

	for (i = 0; a[i]!='\0'; i++);
	

	return i;


}