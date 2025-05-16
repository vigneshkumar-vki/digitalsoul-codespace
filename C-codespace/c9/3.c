#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two values :\n");
	scanf("%d %d",&a,&b);
	int *p1=&a, *p2=&b;
	printf("before swap : *p1=%d *p2=%d",*p1,*p2);
	*p1= *p1 + *p2;     //5+2 =7
	*p2= *p1 - *p2;		//7-2 =5  p2=5			//swaped
	*p1= *p1 - *p2;		//7-5 =2  p1=2
	printf("\nAfter swap : *p1=%d *p2=%d",*p1,*p2);
}