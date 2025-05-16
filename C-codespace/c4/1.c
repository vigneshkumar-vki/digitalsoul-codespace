#include<stdio.h>
int main()
{
	int i,a,b;
	printf("Enter Starting number :");
	scanf("%d",&a);
	printf("Enter Ending number :");
	scanf("%d",&b);
	for(i=b; i>=a; i--)
	{
		printf("%d\n",i);
	}
	return 0;
}