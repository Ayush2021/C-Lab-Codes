// Develop a program to display the n terms of odd natural number and their sum 
#include<stdio.h>
int main ()
{
	int n, i, sum = 0;
	printf("Enter the value of n: \n");
	scanf("%d", &n);
	printf("The first %d odd number are: \n", n);
	
	for(i=1; n>0 ; i+=2)
	{
		printf("%d \n", i);
		sum += i;
		n--;
	}
	printf("Sum of odd natural numbers is: %d",sum);
	return 0;
}
