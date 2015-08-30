#include<stdio.h>
#define size 10000
char half_len(char a[]);
void main()
{
	char a[size],b;
	
	printf("enter the first string\n");
	gets(a);
	b=half_len(a);
	if (b > 0)
	{
		printf("%c",b);
	}
	else
	{
		printf("no character");
	}
	
	
		

}
char  half_len(char a[])
{
	int i, count = 0,j;
	for (i = 0; a[i]; i++)
	{
		count = 0;
		for (j = 0; a[j]; j++)
		{
			if (a[i] == a[j])
			{
				count++;
				
			}
	  }
		if (count > (strlen(a) / 2))
		{
			return a[i];
		}	
}

	
			return 0;
	
}
