#include<stdio.h>
int add(int a,int b);
int main()
{
	int x=2,y=3;
	int sum= add(x,y);
	printf("Sum is %d ",sum);
	return 0;
}
int add(int a,int b)
{
	return a+b;
}