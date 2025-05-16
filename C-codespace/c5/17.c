#include<stdio.h>
int main()
{
	int n,a,avg;
	int c=0,s=0,i=1;
	printf("Enter n:");
	scanf("%d",&n);
	while(n>=i)
	{
		printf("Enter a value :");
		scanf("%d",&a);
		s=s+a;
		c=c+1;
		printf("loop count :%d\n",c);
		avg=s/c;
		printf("Average is %d \n",avg);
		i++;
	}
	printf("sum is %d \n",s);
	printf("Average is %d \n",avg);
	return 0;
}
