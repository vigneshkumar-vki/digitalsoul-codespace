#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20]="c-programming";
	char str2[20]="Language";
	strcat(str1,str2);
	printf("Value of first string is : %s",str1);
	return 0;
}