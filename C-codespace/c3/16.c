#include<stdio.h>
int main()
{
	int s,exp;
	printf("Enter salary :");
	scanf("%d",&s);
	printf("Enter years of experience :");
	scanf("%d",&exp);
	if(exp>5)
	{
		s*=0.05;
		printf("Bonus is %d",s);
	}
	else
	{
		printf("No bonus");
	}
}