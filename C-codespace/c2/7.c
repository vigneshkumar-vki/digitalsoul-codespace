#include<stdio.h>
int main()
{
	char text1[50];
	char text2[33];
	printf("Enter first String");
	scanf("%s",text1);
	printf("Enter second String");
	scanf("%s",text2);
	strcat(text1,text2);
	printf("The final String after String concatenation is %s",text1);
	return 0;
}