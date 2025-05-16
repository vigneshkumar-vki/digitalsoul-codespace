#include<stdio.h>
int main()
{
	int n,t;
	int i=1;
	int x=0,y=1,z=0;
	printf("Enter n :");
	scanf("%d",&n);
	if(n<0)
	{
		printf("pls enter positive number");
	}
	else if(n==0)
	{
		printf("Fibonacci value of %d is %d",n,x);
	}
	else
	{
		printf("fibonacci value of %d is \n",n);
//			int x=0,y=1;
		while(i<=n)
		{
			printf("%d\n",x);
			int z=x+y;
			x=y;
			y=z;
			i++;
		}
	}
return 0;
}