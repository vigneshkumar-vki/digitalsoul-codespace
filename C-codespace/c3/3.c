#include<stdio.h>
int main()
{
	int a;
	printf("Enter a value :");
	scanf("%d",&a);
	if(a>0)
	{
		printf("%d is positive number",a);
	}
	else if(a<0)
	{
		printf("%d is negative number",a);
	}
	else
	{
		printf("Given number is zero");
	}
}