// Develop a program to find the factors of given number.
#include<stdio.h>
int main ()
{
	int i, n;
	printf("Enter the value of n: \n");
	scanf("%d", &n);
	printf("Factors of %d are: \n", n);
	
	for(i=1; i<=n; i++)
	{
		if(n%i == 0)
		{
			printf("%d\t", i);
		}
	}
	return 0;
}
