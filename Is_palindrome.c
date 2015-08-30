#include<stdio.h>
#define max 1000
void polindrome(char a[]);
void main()
{
	char a[max];
	printf("enter the string");
	//scanf("%s",&a);
	gets(a);
	polindrome(a);
}
void polindrome(char a[])
{
	int i,j,k=0;
	for (i = 0; a[i] != '\0'; i++);
	
	
		for (j = 0; j < i/2; j++)
		{
			if (a[j] == a[(i - 1) - j])
				k++;
			else
				break;
		}
		if (k == (i /2))
			printf("the string is polindrome");
		else
			printf("not a polindrome");
	
	

}