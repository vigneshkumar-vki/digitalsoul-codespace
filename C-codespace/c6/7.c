#include<stdio.h>
int main()
{
	int i=0,j=0;
	int a[3][4]={ {1,2,3,4},{2,3,4,5},{3,4,5,6} };
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("a[%d] [%d] = %d \n",i,j,a[i][j]);
		}
	}
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}