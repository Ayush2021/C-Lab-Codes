// Develop a program to print odd numbers from 1 to n
#include<stdio.h>
int main ()
{
	int i, n;
	printf("Enter the value of n: \n");
	scanf("%d", &n);
	printf("Odd number between 1 to %d are: \n", n);
	for(i=1; i<=n; i++)
	{
		if(i%2 != 0)
		{
			printf("%d \t", i);
		}
	}
	return 0;
}
