#include<stdio.h>
int main()
{
	int a[]={2,4,6,8};
	for(int i=0; i<4; i++)
	{
		printf("%d\n",a[i]);
	}
	int ch,b;
	printf("Enter the index of element you want to change :");
	scanf("%d",&ch);
	printf("Enter value :");
	scanf("%d",&b);
	a[ch]=b;
	for(int i=0; i<4; i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}