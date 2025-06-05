#include <stdio.h>
int main()
{
FILE *fp;
int i;
char str[] = "File operations, writing the data here...\n";
fp  = fopen("data.txt", "w");
for (i = 0; str[i] != '\n'; i++)
{
    fputc(str[i], fp);
}
fclose(fp);
return 0;
}

