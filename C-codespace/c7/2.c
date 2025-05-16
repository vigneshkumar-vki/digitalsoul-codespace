#include<stdio.h>
#include<string.h>
int main()
{
	char a[]="systech";
	int d=strlen(a);
	printf("%d\n",d);
	for (int i=0; i<d; i++)
	{
		printf("%c\n",a[i]);
	}
	return 0;
}