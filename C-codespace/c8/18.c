#include<stdio.h>
void add(int x,int y);
int main()
{
	int a=5;
	int b=7;
	add(a,b);
	return 0;
}
void add(int x,int y)
{
	int z=x+y;
	printf("sum is %d",z);
	

}