// Develop a program to print digit of given number
#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter the numbers:\n");
    scanf("%d", &n);
    
    while(n>0){
    	m=n%10;
    	n=n/10;  //integer division
    	printf("\nNumber of digits: %d", m);
	}
    return 0;
}




