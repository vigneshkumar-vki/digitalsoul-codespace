#include<stdio.h>
void add (int a, int b);
int main()
{
	int x=2,y=3;
	add(x,y);
	return 0;
}
void add (int a, int b)
{
	int c;
	c=a+b;
	printf("sum is %d",c);
	
}