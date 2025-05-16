#include<stdio.h>
#include<math.h>
int main()
{
	int n,p;
	printf("Enter a value :");
	scanf("%d",&n);
	printf("Enter power value :");
	scanf("%d",&p);
	int x=pow(n,p);
	printf("%d power %d is %d",n,p,x);
	return 0;
}