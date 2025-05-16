#include<stdio.h>
int main()
{
	int n=5,i,j,temp;
	int a[n];
	for (int i=0; i<n; i++)
		{
			printf("Enter a[%d]:",i);
			scanf("%d",&a[i]);
		}
		printf("before sorting :\n");
	for (i=0; i<n; i++)
		{
			printf("%d\n",a[i]);
		}
	for(int i=0;i<n;i++)
	{
		for (j=i+1; j<n; j++)
		{
			if(a[j]>a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("After sorting:\n");
	for (i=0; i<n; i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}