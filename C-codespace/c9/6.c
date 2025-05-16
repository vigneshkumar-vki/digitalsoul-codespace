#include<stdio.h>
#include<string.h>
int main()
{
	const char *names[]={"systech","c","Programming","language"};
	int i=0;
	for ( i=0; i<4; i++)
	{
		printf("Names[%d] = %s\n",i,names[i]);
	}
	return 0;
}