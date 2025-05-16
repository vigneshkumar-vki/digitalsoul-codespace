#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	printf("Enter 1st string :");
	gets(str1);
	printf("Enter 2nd string :");
	gets(str2);
	if(strcmp(str1,str2)==0)  //comparison
	{
		printf("Strings are equal");
	}
	else
	{
		printf("String are not equal");
	}
	return 0;
}