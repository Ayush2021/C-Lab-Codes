// Develop a program to find factorial of the given number
#include<stdio.h>
int main()
{
    int i = 0, n, factorial = 1;
    printf("Enter the value of n: \n");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {
        factorial *= i;
    }
    
    printf("The value of factorial of %d is %d\n", n, factorial);
    return 0;
}


