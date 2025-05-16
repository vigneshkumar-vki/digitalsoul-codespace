#include<stdio.h>
int main()
{

	char text1[33]="c";
	char text2[33]="programming";
	strcat(text1,text2);
	printf("%s",text1);
	return 0;
}