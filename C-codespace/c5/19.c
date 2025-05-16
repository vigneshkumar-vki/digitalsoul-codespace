#include<Stdio.h>
int main()
{
	int n,sum=0;
	int a;
	printf("enter n :");
	scanf("%d",&n);
	int i=1;
	while(i<=n)
	{
		a=i*i;
		sum=sum+a;
		i++;
	}
	printf("sum of square values :%d",sum);
	return 0;
}