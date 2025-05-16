#include<stdio.h>
int main()
{
	int a;
	float b;
	char c;
	double d;
	long int e;
	
	int v=sizeof(a);
	int w=sizeof(b);
	int x=sizeof(c);
	int y=sizeof(d);
	int z=sizeof(e);
	//size of the int float char double in bites
	printf("%d\n",v);
	printf("%d\n",w);
	printf("%d\n",x);
	printf("%d\n",y);
	printf("%d\n",z);
}