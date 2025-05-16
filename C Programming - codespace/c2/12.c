#include<stdio.h>
int main()
{
	int a=20,b=3,c=30,d=15;
	printf("%d\n",(a>b)&&(c>d));
	printf("%d\n",(a>b)||(c>d));
	printf("%d\n",!(a>b)&&(c>d));
	return 0;
}