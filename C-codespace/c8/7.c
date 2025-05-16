#include<stdio.h>
int add(int g,int h)
{
	int c;
	c=g+h;
	return c;
}
int main()
{
	int sum=add(2,9);
	printf("Sum is %d",sum);
	return 0;
	//return
//	1  =error
//	0  =no error
//	-1 =run with error
}