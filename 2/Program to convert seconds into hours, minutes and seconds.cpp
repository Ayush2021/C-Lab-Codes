//Program to convert seconds into hours, minutes and seconds
#include <stdio.h>
int main()
{
    int sec, h, m, s;
    printf("Enter the seconds: \n");
    scanf("%d", &sec);
    h = sec / 3600;          
    m = (sec % 3600) / 60;   
    s = sec % 60;            
    printf("HH:MM:SS is: %d:%d:%d \n", h, m, s);
    return 0;
}

