#include<stdio.h>
void sumofseries();
int main()
{
	sumofseries();
	return 0;
}
void sumofseries()
{
	int i,sum=0,n;
	printf("Enter n:");
	scanf("%d",&n);
	sum=(n*(n+1))/2;
	printf("sum of series :");
	for (i=1; i<=n; i++)
	{
		if (i!=n)
		{
			printf("%d+",i);
		}
		else
		{
			printf("%d =%d",i,sum);
		}
	}
}