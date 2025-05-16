#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a value :");
	scanf("%d",&a);
	printf("Enter b value :");
	scanf("%d",&b);
	printf("Enter c value :");
	scanf("%d",&c);
	if (a>b)
	{
		if(a>c)
		{
			printf("a is the biggest number");
		}
		else{
			printf("c is the biggest number");
		}
	}
	else if(b>a)
	{
		if (b>c)
		{
			printf("b is the biggest number");
		}
		else
		{
			printf("c is the biggest  number");
		}
	}
}