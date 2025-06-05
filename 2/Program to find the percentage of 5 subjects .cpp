//Program to find percentage of 5 subjects
#include<stdio.h>
int main()
{
	int n1, n2, n3, n4, n5;
	float per, total;
	printf("Enter the subject marks:\n");
	scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);
	total =n1 + n2 + n3 + n4 + n5;
	per = (total/500)*100;
	printf("Percentage is: %f", per);
	return 0;
}
