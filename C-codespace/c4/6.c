#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the last term :");
	scanf("%d",&b);
	printf("Even numbers : \n");
	for (a=2; a<=b; a=a+2)
	{
		printf("%d\n",a);
	}
	return 0;
}