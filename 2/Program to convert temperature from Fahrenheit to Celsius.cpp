//Program to convert temperature from Fahrenheit to Celsius c=((F-32)*5)/9
#include<stdio.h>
int main()
{
	float c, f;
	printf("Enter temperature in fahrenheit:\n");
	scanf("%f", &f);
	c = ((f - 32)*5)/9;
	printf("Celsius is: %f", c);
	return 0;
}
