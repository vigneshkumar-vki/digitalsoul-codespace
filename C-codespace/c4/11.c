#include<stdio.h>
int main()
{
	int a,n,i,d,s=0;
	printf("enter the first term :");
	scanf("%d",&a);
	printf("Enter last term :");
	scanf("%d",&n);
	for (i=a; i<=n; i++)   //a=4,n=9;
	{
		d=i*i;
		s+=d;
					/* but we are using s+=d: 
					
					   	i<=n			    s=s+i;
					   	4<=9	passed		0=0+4=4
					   	5<=9	passed		4=4+5=9
					   	6<=9	passed		9=9+6=15
					   	7<=9	passed		15=15+7=22
					   	8<=9	passed		22=22+8=30
					   	9<=9	passed		30=30+9=39
					*/
	}
	printf("sum of square values %d",s);
	return 0;
	
}