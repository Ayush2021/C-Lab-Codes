#include <stdio.h>
int main()
{
    char sign;
    float a, b, x;
    printf("Enter the values of two numbers:\n");
    scanf("%f %f", &a, &b); 
    printf("Enter sign (+, -, *, /):\n");
    scanf(" %c", &sign); 
    
    if (sign == '+') {
        x = a + b;
        printf("The result is: %f\n", x);
    } 
    
    else if (sign == '-') {
        x = a - b;
        printf("The result is: %f\n", x);
    } 
    
    else if (sign == '*') {
        x = a * b;
        printf("The result is: %f\n", x);
    } 
    
    else if (sign == '/') {
        if (b != 0) { 
            x = a / b;
            printf("The result is: %f\n", x);
        } else {
            printf("Division by zero is not allowed.\n");
        }
    } 
    else {
        printf("Invalid operator entered!\n");
    }
    return 0;
}
