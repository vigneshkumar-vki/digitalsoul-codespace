#include<stdio.h>
int main()
{
	int a;
	printf("Enter a value :");
	scanf("%d",&a);
	a>=0 && a<=9 ? printf ("single digit number"):a>=10 && a<=99 ? printf ("double digit number"): printf("It's not a single or double digit number");
	
}