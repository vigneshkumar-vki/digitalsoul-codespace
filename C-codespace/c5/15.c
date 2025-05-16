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
		rev=(rev*10)+rem;
		n=n/10;
	}
	if (a==rev)
	{
		printf("The given number is palindrome");
	}
	else{
		printf("The given number is not palindrome");
	}
	return 0;
}