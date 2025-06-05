//Program to check the numberis positive or negative
#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number: \n");
    scanf("%d", &number);
    if(number>0){
    	printf("Number is positive. \n");
	}
	if(number<0){
		printf("Number is negative. \n");
	}
	if(number==0){
		printf("Number is Zero. \n");
	}
    return 0;
}

