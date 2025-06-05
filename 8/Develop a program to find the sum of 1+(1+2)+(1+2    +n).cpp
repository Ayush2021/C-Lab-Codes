// Develop a program to find the sum of 1+(1+2)+(1+2    +n).
#include<stdio.h>
int main ()
{
	int i, j, n, sum=0;
	printf("Enter the value of n: \n");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			sum = sum + j;
		}
	}
	printf("Sum is: %d", sum);
	return 0;
}
