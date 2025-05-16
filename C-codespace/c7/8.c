#include<stdio.h>
int main()
{
	char name[20];
	printf ("Enter Name :");

	fgets(name,sizeof(name),stdin);
	puts(name);
	return 0;
}