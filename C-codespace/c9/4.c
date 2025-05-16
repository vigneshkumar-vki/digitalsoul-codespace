#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,5};
	int i,*ptr[5];
	for (i=0; i<5; i++)
	{
		ptr[i] = &a[i];
	}
	for(i=0; i<5; i++)
	{
		printf("Value of a[%d] =%d\n",i,*ptr[i]);
	}
	return 0;
	
}