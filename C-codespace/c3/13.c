#include<stdio.h>
int main()
{
	int a;
	printf("enter a value :");
	scanf("%c",&a);
	a>=97 && a<=122 ? printf("lower"):a>=65 && a<=90 ? printf("upper"): printf("It's not an alphaphet");
	
}//alphanumeric values