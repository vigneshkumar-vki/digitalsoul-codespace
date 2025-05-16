#include<stdio.h>
int main()
{
	int ap,sp,diff;
	printf("Enter actual price of product :");
	scanf("%d",&ap);
	printf("Enter sales price of product :");
	scanf("%d",&sp);
	if(ap>sp)
	{
		diff=ap-sp;
		printf("%d is loss",-(diff));
	}
	else
	{
		diff=sp-ap;
		printf("%d is profit",+(diff));
	}
}