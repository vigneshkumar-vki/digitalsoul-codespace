#include<stdio.h>
int main()
{
	int i,n,a[50],b;
	printf("Enter n :");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		printf("Enter number %d :",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		if(a[0]<a[i])
		{
			a[0]=a[i];
		}
	}
	printf("Biggest number is %d ",a[0]);
	
}