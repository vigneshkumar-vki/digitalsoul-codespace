#include<stdio.h>
int main()
{
	int n,i=1;
	printf("Enter n:");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%3==0)
		{
			printf("%d is divisible by 3\n",i);
		}
		else
		{
			printf("%d is not divisible by 3\n",i);
		}
		i++;
		
	}
	return 0;
}