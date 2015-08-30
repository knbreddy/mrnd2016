#include<stdio.h>

void reverse_sentence(char a[]);
void main()
{
	char a[1000];
	printf("enter the sentence:");
	gets(a);
	reverse_sentence(a);
}
void reverse_sentence(char a[])
{
	char temp;
	int i, j, k,p=0,l=0;
	for (i = 0; a[i] != '\0'; i++);
	for (j = 0; j < i/2; j++)
	{
		temp = a[j];
		a[j] = a[(i - 1) - j];
		a[(i - 1 - j)] = temp;
	}
	
	p = i;
	for (k = i; k>-2; k--)
	{
		if ((a[k] == 32)||k==-1)
		{ 
			
			l = 0;
			for (j = k+1; ((a[j]!='\0')||(a[j]!=32)); j++)
			{
				temp = a[j];
				a[j] = a[(p - 1)-l];
				a[(p - 1) -l] = temp;
				l++;
				if (l >= (((p - 1) - k) / 2))
					break;
			}
			p = k;

		}
	}
	printf("\n %s \n", a);
}