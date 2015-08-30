#include<stdio.h>
#define max 10
void check(int a[], int n, int   num);
void main()
{
	int a[max], n, i, num;
	printf("enter the range of sorted array");
	scanf("%d", &n);
	if (n < 0)                               
	{
		printf("invalid input");
		exit(0);
	}

	printf("\n enter the elements ");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("enter the num to be inserted");
	scanf("%d", &num);
	check(a, n, num);

}
void check(int a[], int n, int num)
{
	int i, index, x, y;

	if (num < a[0])                    
	{
		for (i = n; i >= 0; i--)
		{
			a[i] = a[i - 1];

		}
		a[0] = num;
	}

	else
	{
		for (i = 0; i < n; i++)
		{
			                           
			if ((a[i] == num))         
			{
				index = i;
				y = n;
				while (y >= i)
				{
					a[y] = a[y - 1];
					y--;

				}
				a[index] = num;
				break;
			}
			

			if (num >= a[n - 1])
			{                          
				a[n] = num;
			}
			
			if (a[i] < num &&num < a[i + 1])     
				                                 
				{
					index = i;
					y = n;
					while (y > i)
					{
						a[y] = a[y - 1];
						y--;

					}
					a[index+1] = num;
					break;
				
			}


		}

	}
	for (i = 0; i<n + 1; i++)
	{
		printf("%d\t", a[i]);
	}
}


