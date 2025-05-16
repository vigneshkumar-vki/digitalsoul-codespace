#include<stdio.h>
int main()
{
	char a[]="SYSTECH";
	int d=sizeof(a);
	printf("%lu\n",d);
	for (int i=0; i<d; i++)
	{
		printf("%c\n",a[i]);
	}
	return 0;
}