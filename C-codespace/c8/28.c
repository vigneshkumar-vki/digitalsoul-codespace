#include<stdio.h>
#include<math.h>

int main()
{
	int n;
	printf("Enter a value :");
	scanf("%d",&n);
	int s=sin(n);	
	int c=cos(n);	
	int t=tan(n);
	printf("Sin value of %d is %d \n",n,s);	
	printf("cos value of %d is %d \n",n,c);	
	printf("tan value of %d is %d \n",n,t);
	return 0;	
}