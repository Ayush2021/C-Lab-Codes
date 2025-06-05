// Develop a program to find out the prime number between given two number
#include <stdio.h>
int main()
{
    int a, b, i, j, flag;
    printf("Enter Initial value of Number: ");
    scanf("%d", &a); 
    printf("\nEnter Final value of Number: ");
    scanf("%d", &b); 
    printf("\nPrime numbers between %d and %d are: ", a, b);
    for (i = a; i <= b; i++) {
        if (i == 1 || i == 0)
            continue;
        flag = 1;
        for (j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            printf("%d\t ", i);
    }
    return 0;
}
