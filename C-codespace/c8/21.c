#include<stdio.h>
void sumofevenseries ();
int main()
{
	sumofevenseries();
	return 0;
}
void sumofevenseries()
{
	int i=2,sum=0,n;
	printf("Enter n:");
	scanf("%d",&n);
	printf("sum of Even Number : \n");
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