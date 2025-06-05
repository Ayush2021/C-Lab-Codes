//Develop a program to compute the value od ex by using formula.
#include<stdio.h>
int main ()
{
    int i, j, n, fact;
    float sum = 1.0, x, power;
    printf("Enter the value of x (exponent): \n");
    scanf("%f", &x);
    printf("Enter the value of n (number of terms): \n");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        fact = 1;
        for(j = 1; j <= i; j++)
        {
            fact = fact * j;
        }
        power = 1;
        for(j = 1; j <= i; j++)
        {
            power = power * x;
        }
        sum = sum + (power / fact);
    }
    printf("The value of e^%.2f is: %.6f\n", x, sum);
    return 0;
}
