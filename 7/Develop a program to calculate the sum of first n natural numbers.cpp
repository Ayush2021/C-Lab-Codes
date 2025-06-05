// Develop a program to calculate the sum of first n natural numbers
#include<stdio.h>
int main ()
{
	int n, i, sum = 0;
	printf("Enter the number: \n");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		sum += i;
	}
	printf("%d \n ", sum);
	return 0;
}
