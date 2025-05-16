#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter starting number :");
	scanf("%d",&a);
	printf("Enter ending number :");
	scanf("%d",&b);
	int s1=0,s2=0, s3=0;
	int i=a;
	while(i<=b)
	{
		if(i>0)
		{
			s1++;
		}
		else if(i<0)
		{
			s2++;
		}
		else
		{
			s3++;
		}
		i++;
	}
	printf("sum of positive numbers is %d \n",s1);
	printf("sum of Negative numbers is %d \n",s2);
	printf("sum of zero is %d \n",s3);
	
}