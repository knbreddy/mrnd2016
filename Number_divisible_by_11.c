#include<stdio.h>
int Divisible_11(int n);
void main()
{
	int n,a;
	printf("enter the number\n");
	scanf("%d", &n);
	a=Divisible_11(n);
	if (a == -1)
	{
		printf("\nit is not divisble by 11");
	}
	else
	{
		printf("\nit is divisibe by 11");
	}
}

int Divisible_11(int n)
{
	int i=0, j,sumeven=0,sumodd=0,d=0;
	while (n)
	{
		if (i % 2 == 0)
		{
			d = n % 10;
			sumeven =sumeven+d;
			n = n / 10; 
			i++;
			
		}
		else
		{
			d = n % 10;
			sumodd += d;
			n = n / 10; i++;
		}


	}
	
	if (abs(sumeven - sumodd))
	{
		int x = abs(sumeven - sumodd);
		 return Divisible_11(x);
	}
	if (sumeven==sumodd)
	{
		return 1;
	}
	else
		return -1;

	
}


