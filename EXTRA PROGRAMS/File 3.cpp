#include <stdio.h>
int main()
{
	FILE * fp;
	fp = fopen("fputs.txt", "w+");
	fputs("1.This is fputs function \n", fp);
	fputs("We don't need to use for loop\n", fp);
	fclose(fp);
	return (0);
}

