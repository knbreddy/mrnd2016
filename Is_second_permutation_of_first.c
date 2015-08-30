#include<stdio.h>
void permut();
void main() 
{
	char a[1000], b[1000];
	printf("enter the string:");
	scanf("%s",&a);
	printf("enter the permutation:");
	scanf("%s", &b);
	permut(a, b);

}
void permut(char a[], char b[])
{
	int i, j, k = 0, flag = 0, br = 0,len;
	for (i = 0; a[i] != '\0'; i++);
	len = i;
	for (j = 0; b[j] != '\0'; j++);
	if (i != j)
		printf("not a permutation");
	else if (i == j)
	{
		for (i = 0; a[i] != '\0'; i++)
		{
	
			for (j = 0; b[j] != '\0'; j++)

				
			{
				if (a[i] == b[j])
					flag = 1;
			}
				if (flag == 1)
				{
					flag = 0;
					k++;
					
				}
				else
				{
					printf("not a permutation");
						
						break;
				}
			
			
		}
		if (k == len)
			printf("permutation");

	}

}