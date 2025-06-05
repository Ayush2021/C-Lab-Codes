#include <stdio.h>

int main() 
{
    FILE * fp;  // Declare a file pointer
    char b[30], c;  // Declare a character array to store a string and a single character variable

    // Opening the file "fputs.txt" for reading
    fp = fopen("fputs.txt", "r");  
    printf("----read a line----\n");

    // Using fgets to read a line (up to 50 characters) from the file
    fgets(b, 50, fp); 
    printf("%s\n", b);  // Printing the string that was read from the file

    printf("----read and parse data----\n");

    // Reopening the file "fputs.txt" for reading
    fp = fopen("fputs.txt", "r");  

    // Declare four strings to hold individual words read from the file
    char str1[20], str2[20], str3[20], str4[20];

    // Using fscanf to read the first four words from the file and store them in str1, str2, str3, and str4
    fscanf(fp, "%s %s %s %s", str1, str2, str3, str4);

    // Printing the values of the read strings
    printf("Read String1 |%s|\n", str1);
    printf("Read String2 |%s|\n", str2);
    printf("Read String3 |%s|\n", str3);
    printf("Read String4 |%s|\n", str4);

    printf("----read the entire file----\n");

    // Reopening the file again for reading
    fp = fopen("fputs.txt", "r");  

    // Using getc to read each character from the file until EOF is reached
    while ((c = getc(fp)) != EOF) 
        printf("%c", c);  // Printing each character read from the file

    // Closing the file after reading
    fclose(fp);

    return 0;
}

