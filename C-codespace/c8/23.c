#include<stdio.h>
int sum(int a);
int main()
{
	int n,res;
	printf("Enter a positive number :");
	scanf("%d",&n);
	res=sum(n);
	printf("sum=%d",res);
	return 0;
}
int sum(int a)
{
	if(a!=0)
	{
		return a+sum(a-1);
	}
	else
	{
		return a;
	}
}