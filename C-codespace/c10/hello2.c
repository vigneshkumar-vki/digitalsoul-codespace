#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("hello.txt","w");
	char a[]="hello";
	fprintf(fp,"%s",a);
	fclose(fp);
}