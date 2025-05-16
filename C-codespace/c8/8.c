#include<stdio.h>
int add (int g,int h)
{
	int c;
	c=g+h;
	return c;
}
int main ()
{
	int a,b;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	int sum=add(a,b);
	printf("sum is %d",sum);
	return 0;
}