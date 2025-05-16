#include<stdio.h>
void massenergy();
int main()
{
	int m,c;
	printf("Enter m :");
	scanf("%d",&m);
	printf("Enter c :");
	scanf("%d",&c);
	massenergy(m,c);
}
void massenergy(int a, int b)
{
	int me;
	me=a*b*b;
	printf("Mass Energy is %d",me);
}