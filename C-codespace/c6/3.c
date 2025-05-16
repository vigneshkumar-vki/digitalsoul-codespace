#include<stdio.h>
int main()
{
	int n=5;
	int a[n];
	for (int i=0; i<5; i++)
	{
		printf("Enter a[%d] :",i);
		scanf("%d",&a[i]);
	}
	for (int i=0; i<n; i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
	}
