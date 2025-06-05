#include <stdio.h>    
int main ()    
{    
    int a[3][3],i,j;  
    for (i=0;i<3;i++)    // for row
    {    
        for (j=0;j<3;j++)     // for column
        {    
            printf("Enter a[%d][%d]: ",i,j);                
            scanf("%d",&a[i][j]);    
        }    
    }    
 	printf("\n printing the elements ....\n");   // Printing  
    for(i=0;i<3;i++)    
    {    
        printf("\n");    
        for (j=0;j<3;j++)    
        {    
            printf("%d\t",a[i][j]);    
        }    
    }
	return 0;    
} 

