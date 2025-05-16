#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("Enter a value :");
	scanf("%d",&n);
	int s=exp(n);
	printf("exp value of %d is %d",n,s);
	return 0;
}