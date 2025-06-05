//Program to check the numberis positive or negative by using (if-else)
#include <stdio.h>
int main()
{
    int num   ;
    printf("Enter a number: \n");
    scanf("%d", &num);
    if(num > 0){
    	printf("Number is positive. \n");
	}
	else if(num < 0){
		printf("Number is negative. \n");
	}
	else{
		printf("Number is Zero. \n");
	}
    return 0;
}

