#include<stdio.h>
int main()
{
	int n,i=1;
	printf("enter n:");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i==5)
		{
			break;
		}
		printf("%d\n",i);
		i++;
	}
	return 0;
}