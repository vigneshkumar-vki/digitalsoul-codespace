#include<stdio.h>
int main()
{
	int n,rem;
	printf("Enter a number :");
	scanf("%d",&n);
	int a=n;
	int rev=0;
	while(n>0)
	{
		rem=n%10;
		rev=(rev*10)+ rem; 
		n=n/10;
	}
	printf("The number Enter : %d \n",a);
	printf("The reverse of enter number :%d\n",rev);
	return 0;
}