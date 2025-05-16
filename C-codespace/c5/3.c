#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter starting number :");
	scanf("%d",&a);
	printf("Enter ending number :");
	scanf("%d",&b);
	while(a<b)
	{
		printf("%d\n",a);
		a=a+2;
	}
	return 0;
}