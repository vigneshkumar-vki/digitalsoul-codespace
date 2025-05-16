#include<stdio.h>
int main()
{
	int a,f=1;
	printf("enter a number :");
	scanf("%d",&a);
	for (int i=1; i<=a; i++) // a=4;
	{
		/*
			i<=a     f=f*i
		    1<=4	 1=1*1=1
		    2<=4	 1=1*2=2
		    3<=4	 2=2*3=6
		    4<=4	 6=6*4=24   ----a is 4, f is 24.   
		                       
		*/
		f=f*i;
	}
	printf("Facttorial of %d is %d",a,f);
	return 0;
}