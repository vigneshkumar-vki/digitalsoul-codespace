#include<stdio.h>
int main()
{
	char name[20];
	printf("Enter name :");
	fgets(name,sizeof(name),stdin);
	int l=strlen(name);
	printf("length of the given string is %d \n",l);
//	puts(name);       runs with error
	return 0;
}