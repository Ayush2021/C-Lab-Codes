// Develop a program to check the number is PALINDROME or not
#include <stdio.h>
int main()
{
    int n, r, temp, sum = 0;
    printf("Enter the number:\n");
    scanf("%d", &n);

    temp = n;  
    while (n > 0) {
        r = n % 10;     
        sum = sum * 10 + r;    
        n = n / 10;       //remove the last digit from given input
    }
    
    if (temp == sum) {
        printf("%d is a palindrome number.\n", temp);
    } else {
        printf("%d is not a palindrome number.\n", temp);
    }
    return 0;
}

