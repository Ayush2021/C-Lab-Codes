#include<stdio.h>
int main()
{
	
	int marks;
	printf("Enter the marks: \n");
	scanf("%d", &marks);
	
	if(marks>0 && marks <100)
	{
		printf("Renter your marks again.............!");
	}
	
	else if(marks >= 90)
	{
		printf("Your grade is A+");	
	} 
	else if( marks >= 80)
	{
		printf("Your grade is A");	
	} 
	else if( marks >= 70)
	{
		printf("Your grade is B");	
	} 
	else if( marks >= 60)
	{
		printf("Your grade is C");	
	} 
	else if( marks >= 50)
	{
		printf("Your grade is D");	
	} 
	else
	{
		printf("You are Fail");
	} 
	return 0;
}





