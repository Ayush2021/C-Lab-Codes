//Program to find out the largest number from three number without using (&& logical operator)
#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter three numbers: \n");
    scanf("%d%d%d", &num1, &num2, &num3);
    
    if (num1 >= num2) {
        if (num1 >= num3) {
            printf("%d is the largest number.\n", num1);
        } else {
            printf("%d is the largest number.\n", num3);
        }
    } 
	
	else {
        if (num2 >= num3) {
            printf("%d is the largest number.\n", num2);
        } else {
            printf("%d is the largest number.\n", num3);
        }
    }

    return 0;
}


