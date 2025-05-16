#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a value :");
	scanf("%d",&a);
	printf("enter b value :");
	scanf("%d",&b);
	printf("enter c value :");
	scanf("%d",&c);
	a>b ? a>c ? printf("a is big"):printf("c is big") :b>c ? printf("b is big"):printf("c is big");
	return 0;

}