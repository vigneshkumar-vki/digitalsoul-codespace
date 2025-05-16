#include<stdio.h>
int main()
{
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	for (int i=1; i<n; i++)
	{
		if(i==5)
		{
			continue;
		}
		printf("%d\n",i);
	}
	return 0;
}