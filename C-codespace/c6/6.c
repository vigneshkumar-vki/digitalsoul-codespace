#include<stdio.h>
void main()
{
	int a[100],i,n,fl,sl;
	printf("Enter array size :");
	scanf("%d",&n);
	printf("Enter array elements :\n");
	
	for (i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
		fl=a[0];
		sl=a[1];
	
	for(i=0; i<n; i++)
	{
		if(a[i]>fl)
		{
			sl=fl;
			fl=a[i];	
		}	
		else if(a[i]>sl && a[i]!=fl)
		{
			sl=a[i];
		}
	}
	printf("largest = %d, second largest = %d",fl,sl);
	
}