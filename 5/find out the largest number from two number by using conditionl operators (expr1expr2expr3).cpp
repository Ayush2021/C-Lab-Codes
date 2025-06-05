// find out the largest number from two number by using conditionl operators ((condition)?expr2:expr3)
#include<stdio.h>
int main()
{
	int n1, n2, largest;
	printf("Enter first Number:\n");
	scanf("%d", &n1);
	printf("Enter Second Number:\n");
	scanf("%d", &n2);
	largest = (n1>n2) ? n1:n2;
	printf("The largest number is: %d", largest);
	return 0;
}
