//Program to find average of 5 subjects
#include<stdio.h>
int main()
{
	int n1, n2, n3, n4, n5;
	float avg;
	printf("Enter the subject marks:\n");
	scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);
	avg = (n1 + n2 + n3 + n4 + n5) / 5;
	printf("Percentage is: %f", avg);
	return 0;
}
