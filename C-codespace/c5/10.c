#include<stdio.h>
int main()
{
	int i=5,n=1;
	while(i>=n)
	{
		int j=1;
		while(j<=i)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i--;
	}
	return 0;
}