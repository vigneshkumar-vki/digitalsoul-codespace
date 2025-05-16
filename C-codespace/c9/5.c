#include<stdio.h>
int main()
{
	char n='A';
	char *pointer=&n;
	printf("%c\n",n);
	printf("%p\n",pointer);
	printf("%c\n",*pointer);
	return 0;
}