#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	printf("enter name :");
	fgets(str1,sizeof(str1),stdin);
	strcpy(str2,str1);
	printf("%s",str1);
	printf("%s",str2);
	return 0;
}