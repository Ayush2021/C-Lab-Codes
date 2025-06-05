// Program to print addition of 2 numbers(with scanf)
#include<stdio.h>
int main()
{
	int number1, number2, sum;
	printf("Enter the value of number1 and number2:\n");
	scanf("%d%d", &number1, &number2);
	sum = number1+number2;
	printf("Sum is: %d", sum);
	return 0;
}
