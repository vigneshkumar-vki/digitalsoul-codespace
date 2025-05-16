#include<stdio.h>
int main()
{
	int a,b,c=0,c1=0;
	printf("enter starting number :");
	scanf("%d",&a);
	printf("Enter ending number :");
	scanf("%d",&b);
	do
	{
		if(a%2==0)
		{
			c=c+a;
		}
		else
		{
			c1=c1+a;	
		}
		a++;
	}
	while(a<=b);
	printf("sum of even numbers %d\n",c);
	printf("sum of odd numbers %d",c1);
	return 0;
	
}