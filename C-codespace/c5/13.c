#include<stdio.h>
int main()
{
	int a,t,e,m,s,ss,sum,avg;
	int i=1;
	printf("Enter number of students:");
	scanf("%d",&a);
	while(i<=a)
	{
		printf("Enter number %d student's :\n",i);
		printf("Tamil :\t");
		scanf("%d",&t);
		printf("english :\t");
		scanf("%d",&e);
		printf("Maths :\t");
		scanf("%d",&m);
		printf("science :\t");
		scanf("%d",&s);
		printf("Social science :\t");
		scanf("%d",&ss);
		sum=t+e+m+s+ss;
		avg=sum/5;
		printf("Total Marks %d\n",sum);
		printf("average %d\n",avg);
		printf("-------------------------------\n");
		i++;
	}
	return 0;
}