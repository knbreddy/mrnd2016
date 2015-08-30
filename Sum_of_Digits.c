#include<stdio.h>
int sumofdigits(int n);
void main()
{
	int n, sum;
	printf("enter the number\n");
	scanf("%d", &n);
	sum = sumofdigits(n);
	printf("the sum is %d\n", sum);


}

int sumofdigits(int n)
{
	int r, sum = 0; 
	while (n != 0)
	{
		r = n % 10;
		sum += r;
		n = n / 10;
	}

		return sum;


}

