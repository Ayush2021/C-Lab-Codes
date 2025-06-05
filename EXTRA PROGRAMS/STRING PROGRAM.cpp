// Program for String 
#include<stdio.h>
#include<string.h>  
int main()
{
	int a,b;
	char s1[50], s2[50];
	printf("Enter the string: \n");
	scanf("%s",s1);
	printf("Enter the options:\n1.String Length\n2.String reverse\n3.String concatenation\n4.String copy\n5.String upper case\n6.string Lower case\n7.string comparison \n");
	scanf("%d",&a);
	switch(a)
	{
	case 1:
	{
		b=strlen(s1);
   		printf("String Length= %d",b);
    	break;
    }
	case 2:
	{
    	printf("String reverse = %s",strrev(s1));
    	break;
	}
	case 3:
	{
    	printf(" Enter the target string: \n");
    	scanf("%s",&s2);
    	strcat(s2,s1);
    	printf(" result of concat = %s", s2);
    	break;
    }
   case 4:
   	{
		strcpy(s2,s1);
		printf("Copied string = %s", s2);
		break;
	}
	case 5:
   	{
    	printf("the upper case of given string = %s", strupr(s1));
    	break;
   	}
	case 6:
   	{
    	printf("the Lower case of given string = %s", strlwr(s1));
    	break;
   	}
	case 7:
   	{
    	printf ("enter the string you wish to compare with your prevoius string \n");
    	scanf("%s",&s2);
    	a=strcmp(s1,s2);
    	if(a==0)
		{
			printf("Strings are same");
       	}
       	else
       	{
			printf("Strings are not same");
       	}
       	break;
    }
    {
   		printf("Enter the correct option:");
   	}
   	return 0;
	}
}
