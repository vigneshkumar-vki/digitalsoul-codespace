#include<stdio.h>
void si(int a,int b,int c);
int main()
{
	int p,n,r;
	printf("enter P :");
	scanf("%d",&p);
	printf("enter N :");
	scanf("%d",&n);
	printf("enter R :");
	scanf("%d",&r);
	si(p,n,r);
}
void si(int a,int b,int c)
{
	int i;
	i=(a*b*c)/100;
	printf("simple interest (si) is %d",i);
}