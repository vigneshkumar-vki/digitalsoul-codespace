#include<stdio.h>
int main()
{
	int a,b,i,s=0;
	printf("Enter the first term:");
	scanf("%d",&a);
	printf("Enter the last term :");
	scanf("%d",&b);
	for (i=a;i<=b;i++)  //a=4,b=9
	{
		s+=i;
		/*
		        s=s+i
		4<=9--->0=0+4=4
		5<=9--->4=4+5=10
		6<=9--->0=10+6=16
		7<=9--->0=16+7=23
		8<=9--->0=23+8=30
		9<=9--->0=30+9=39
		result-------->39
		*/
	}
	printf("sum of all numbers %d",s);
	return 0;
	
	
}