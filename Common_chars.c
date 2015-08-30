#include<stdio.h>
void commonchar(char a[], char b[]);
void main()
{
	char a[1000], b[1000];
	printf("enter the 1st string:");
	gets(a);
	printf("enter 2nd string");
	gets(b);
	commonchar(a, b);
}
void commonchar(char a[], char b[])
{
	int i, j, k;
	for (k = 0; k <= 10;k++)
	for (i = 0; a[i] != '\0'; i++)
		for (j = i + 1; a[j] != '\0'; j++)
			if (a[i] == a[j])
				a[j] = a[j + 1];
	for (k = 0; k <= 10;k++)
	for (i = 0; b[i] != '\0'; i++)
		for (j = i + 1; b[j] != '\0'; j++)
			if (b[i] == b[j])
				b[j] = b[j + 1];
	for (i = 0; a[i] != '\0'; i++)
		for (j = 0; b[j] != '\0'; j++)
			if (a[i] == b[j])
				printf("%c", a[i]);
	

}