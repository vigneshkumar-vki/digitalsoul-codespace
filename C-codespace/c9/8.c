#include<stdio.h>
int add(int ,int);
int main()
{
	int a,b,r;
	int (*p)(int ,int);
	printf("Enter the values of a and b :");
	scanf("%d %d",&a,&b);
	p=add;
	r=(*p)(a,b);
	printf("value after addition is : %d",r);
	return 0;	
}
int add(int x,int y){
	return x+y;
}