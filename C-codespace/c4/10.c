#include<stdio.h>
int main()
{
	int a,b,i,s=0,s1=0;
	printf("Enter the first term :");
	scanf("%d",&a);
	printf("Enter the second term :");
	scanf("%d",&b);
	for (i=a; i<=b; i++)
	{
		if(i%2==0)        /* 
		                    a=1,b=6
		                    i<=b----->1<=6 condition passed (i%2==0)--->i is a--->(1%2==0) failed condition.
		                    so it moves to else part.
						  */
		{
			s+=i;
		}
		else
		{
			s1+=i;
		}                     
	}
	printf("sum of all even numbers %d\n",s);
	printf("sum of all odd numbers %d",s1);
	return 0;
}