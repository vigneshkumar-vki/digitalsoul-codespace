#include<stdio.h>
void sumofoddseries ();
int main()
{
	sumofoddseries();
	return 0;
}
void sumofoddseries()
{
	int i=1,sum=0,n;
	printf("Enter n:");
	scanf("%d",&n);
	printf("sum of odd Number : \n");
	while(i<=n)
	{
		if(i!=n)
		{
			printf("%d+",i);
		}
		else
		{
			printf("%d=",i);
		}
		sum=sum+i;
		i=i+2;
	}
	printf("%d",sum);
}