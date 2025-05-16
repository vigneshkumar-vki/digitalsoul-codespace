#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a value :");
	scanf("%d",&a);
	printf("Enter b value :");
	scanf("%d",&b);
	if(a>b)
	{
		printf("%d is greater than %d",a,b);
	}
	else
	{
		printf("%d is greater than %d",b,a);
	}
	return 0;
}