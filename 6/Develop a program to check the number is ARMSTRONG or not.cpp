// Develop a program to check the number is ARMSTRONG or not
#include <stdio.h>
int main()
{
    int n, r, temp, sum = 0;   // r= reverse
    printf("Enter the number:\n");
    scanf("%d", &n);

    temp = n;  
    while (n > 0) {
        r = n % 10;      
        sum = sum + (r*r*r);
        n = n / 10;      //remove the last digit from given input   
    }

    if (temp == sum) {
        printf("Armstrong Number");
    } else {
        printf("Not a armstrong number");
    }
    return 0;
}

