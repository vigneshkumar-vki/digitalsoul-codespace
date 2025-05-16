#include<stdio.h>
int main()
{
	int x=10,*p,**pp;
	p=&x;
	pp=&p;
	printf("x value through pointer p = %d\n",*p);     //%d integer
	printf("x value through pointer pp = %p\n",*pp);	//%p pointer.
}