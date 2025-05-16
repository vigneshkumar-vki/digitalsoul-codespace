#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter starting year :");
	scanf("%d",&a);
	printf("Enter ending year :");
	scanf("%d",&b);
	do
	{
		if(a%4==0)
		{
			printf("%d is leap year \n",a);
		}
		else
		{
			printf("%d is not a leap year \n",b);
		}
		a++;
		
	}while(a<=b);
	return 0;
}