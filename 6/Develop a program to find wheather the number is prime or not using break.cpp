// Develop a program to find wheather the number is prime or not using break
#include <stdio.h>
int main()
{
    int n, i, f = 0;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    if (n == 0 || n == 1) {
        f = 1; 
    } 
	else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                f = 1; 
            }
        }
    }
    if (f == 0) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }
    return 0;
}




