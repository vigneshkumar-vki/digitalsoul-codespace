#include<stdio.h>
int main()
{
	int b;
	printf("Enter the last year :");
	scanf("%d",&b);
	printf("Leap Years :\n");
	for (int a = 2000; a<=b; a=a+4)
	{
		printf("%d\n",a);
	}
	return 0;
}