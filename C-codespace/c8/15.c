#include<stdio.h>
int add();
int main()
{
	int sum = add();
	printf("sum is %d\n",sum);
	return 0;
}
int add()
{
	int a,b;
	printf("Enter two values :\n");
	scanf("%d %d",&a,&b);
//	int c=a+b;
//	return c;
	return a+b; 
}