#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("Enter n: ");
	scanf("%d",&n);
	
	int i=1;
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("sum of all numbers is %d",sum);
}