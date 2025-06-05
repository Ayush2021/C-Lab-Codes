// Develop a program to read 3 numbers and multiply the largest of two number to third number
#include<stdio.h>
int main()
{
	int n1, n2, n3, largest, result;
	printf("Enter three Number:\n");
	scanf("%d%d%d", &n1, &n2, &n3);
	largest = (n1>n2) ? n1:n2;
	result= largest * n3;
	printf("The final value is: %d", result);
	return 0;
}
