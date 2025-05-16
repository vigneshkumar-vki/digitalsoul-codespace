#include<stdio.h>
#include<math.h>
int main()
{
	float n=-10.2;
//	printf("Enter float number :");
//	scanf("%f",&n);

	int g=floor(n);
		int d=ceil(n);
	printf("ceil value is %d\n",d);
	printf("floor value is %d\n",g);
	return 0;
}