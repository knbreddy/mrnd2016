#include<stdio.h>
#define size 100000
void Return_2_Max(int a[], int n, int b);
void main()
{
	int a[size], b[2], n, i, x, j, max = 0;
	printf("enter the no of elements\n");
	scanf("%d", &n);
	printf("enter the elements\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	Return_2_Max(a, n, b);
	for (i = 0; i < 2; i++)
	{
		printf("\n %d max is %d\n",i+1, b[i]);
	}

}
void  Return_2_Max(int a[], int n, int b[])
{
	int f, s, i,l = 0, k = 1;
	f = s = -999999;
	for (i = 0; i < n; i++)
	{
		if (a[i] > f)
		{
			s = f;
			f = a[i];
			
		}
		else if (a[i] >s && f != a[i])
		{
			s = a[i];
			
		}
	}

	b[k] = s;
	b[l] = f;



}