#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter starting number :");
	scanf("%d",&a);
	printf("Enter ending number :");
	scanf("%d",&b);
	do
	{
		printf("%d\n",a);
		a=a+2;
	}
	while(a<=b);
	return 0;
}