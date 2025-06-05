// program to check wheather the year is leap year or not
#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year: \n");
	scanf("%d", &year);
	
	if(year%4==0 )
	{
		printf("Given year is Leap Year.");
	}
	else if (year%400==0)
	{
		printf("Given year is Leap Year.");
	}
	else if (year%100 !=0)
	{
		printf("Given year is NOT a leap year.");
	}
	else
	{
		printf("Given year is NOT a leap year.");
	}
	return 0;
}

