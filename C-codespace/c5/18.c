#include<stdio.h>
int main()
{
	int n,sum=0,a;
	printf("Enter n:");
	scanf("%d",&n);
	int i=1;
	while(i<=n)
	{
		a=i*i*i;
		sum=sum+a;
		i++;
	}
	printf("sum of cube values : %d",sum);
	return 0;
}