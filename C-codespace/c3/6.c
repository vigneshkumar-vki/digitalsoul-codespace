#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a value :");
	scanf("%d",&a);
	printf("enter b value :");
	scanf("%d",&b);
	printf("Enter c value :");
	scanf("%d",&c);
	if(a>b&&a>c)
	{
		printf("%d  is the biggest number",a);
	}
	else if(b>a&&b>c){
		printf("%d is the biggest number",b);
	}
	else if(c>a&&c>b)
	{
		printf("%d is the biggest number",c);
	}
	
}