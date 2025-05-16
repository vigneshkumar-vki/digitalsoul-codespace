#include<stdio.h>
int fact(int n);
int main()
{
	int x,n;
	printf("Enter an positive integer :");
	scanf("%d",&n);
	x=fact(n);
	printf("Value %d and its factorial value is %d",n,x);
}
int fact (int n)
{
	if(n>=1)
	{
		return n*fact(n-1);
	}
	else{
		return 1;
		
	}
}
