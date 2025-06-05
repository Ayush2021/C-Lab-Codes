#include <stdio.h>
int main() 
{
        FILE * fp;
        char b[30], c;
        
        fp= fopen("fputs.txt", "r");
        printf("----read a line----\n");
        fgets(b, 50, fp); // reading a line upto 50 characters 
        
        printf("%s\n", b);
        printf("----read and parse data----\n");
        fp = fopen("fputs.txt", "r"); 
        
        // Declare four strings to hold individual words read from the file
        char str1[20], str2[20], str3[20], str4[20];
        fscanf(fp, "%s %s %s %s", str1, str2, str3, str4);
        printf("Read String1 |%s|\n", str1);
        printf("Read String2 |%s|\n", str2);
        printf("Read String3 |%s|\n", str3);
        printf("Read String4 |%s|\n", str4);

        printf("----read the entire file----\n");
        fp = fopen("fputs.txt", "r"); 
        while ((c = getc(fp)) != EOF) 
        printf("%c", c);
        fclose(fp);
        return 0;
    }


