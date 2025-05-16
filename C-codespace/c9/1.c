#include<stdio.h>
int main()
{
	int n=5;
	int *ptr=&n;
	
	printf("%d\n",n);
	printf("%p\n",ptr);
	printf("%d\n",*ptr);
	return 0;
}