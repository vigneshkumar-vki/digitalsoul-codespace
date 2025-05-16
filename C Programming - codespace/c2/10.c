#include<stdio.h>
int main()
{
	int a=20,b=3;
	int c;
	c=a+b;
	printf("value of c is %d\n",c);
	c+=a;
	printf("value of c is %d\n",c);
	c-=a;
	printf("value of c is %d\n",c);
	c*=a;
	printf("value of c is %d\n",c);
	c/=a;
	printf("value of c is %d\n",c);
	c%=a;
	printf("value of c is %d\n",c);
	c=5;
	c&=3;
	printf("value of c is %d\n",c);
	c|=a;
	printf("value of c is %d\n",c);
	c^=a;
	printf("value of c is %d\n",c);
	c=5;
	c>>=a;
	printf("value of c is %d\n",c);
	c<<=a;
	printf("value of c is %d\n",c);
	
	return 0;
}