#include<stdio.h>
int main()
{
	int n=5;
	int *pointer=&n;
	printf("%d\n",n);
	printf("%p\n",pointer);
	printf("%d\n",*pointer);
	return 0;
}