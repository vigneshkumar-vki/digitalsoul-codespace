#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("data.txt","w");
	fputs("systech-c programming language",fp);
	fclose(fp);
}