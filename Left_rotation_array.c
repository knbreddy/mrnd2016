#define size 100000
#include<stdio.h>
void rotate_both_sides(int arr[], int r, int n);
void main()
{
	int a[size],n,i,r;
	printf("enter the no of elements");
	scanf("%d", &n);
	if (n < 0)
	{
		printf("range can't be in negative");
		exit(0);
	}
	printf("enter the array elements:");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	
	printf("enter the rotation number");
	scanf("%d", &r);
	r = r % n;
	rotate_both_sides(a, r, n);
	for (i = 0; i <n; i++)
		printf("%d ", a[i]);
	getch();
	
}

void rotate_both_sides(int a[], int r, int n)
{
	int i,j,temp;
	if (r < 0)
	{
		i = r;
		for (i; i < 0; i++)
		{
			temp = a[0];
			for (j = 0; j < n - 1; j++)
				a[j] = a[j + 1];
			a[j] = temp;

		}
	}
	if (r > 0)
	{
		j = n - 1;
		for (i = 1; i <= r; i++)
		{
			j = n - 1;
			temp = a[n - 1];
			for (j; j >= 0; j--)
				a[j] = a[j - 1];
			a[0] = temp;
		}
	}
		
}





