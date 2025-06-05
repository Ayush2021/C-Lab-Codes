// Program to check the type of triangle
#include <stdio.h>
int main()
{
    float s1, s2, s3;
    printf("Enter the length of three sides of the triangle:\n");
    scanf("%f %f %f", &s1, &s2, &s3);
    
    if (s1 + s2 > s3 && s1 + s3 > s2 && s2 + s3 > s1) {
        if (s1 == s2 && s2 == s3) {
            printf("It is an Equilateral triangle.\n");
        } else if (s1 == s2 || s1 == s3 || s2 == s3) {
            printf("It is an Isosceles triangle.\n");
        } else if ((s1 * s1 + s2 * s2 == s3 * s3) || 
                   (s1 * s1 + s3 * s3 == s2 * s2) || 
                   (s2 * s2 + s3 * s3 == s1 * s1)) {
            printf("It is a Right-angled triangle.\n");
        } else {
            printf("It is a Scalene triangle.\n");
        }
    } else {
        printf("The given sides do not form a valid triangle.\n");
    }
    return 0;
}

