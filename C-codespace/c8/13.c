#include<stdio.h>
void factor();
int main()
{
	factor();
	return 0;
}
void factor()
{

	int i,n,f=1;
	printf("Enter n:");
	scanf("%d",&n);
	for (i=1; i<=n; i++)
	{
		f=f*i;
	}
	printf("Factorial value is %d",f);
}