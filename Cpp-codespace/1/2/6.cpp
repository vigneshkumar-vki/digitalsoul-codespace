#include<iostream>
#include<string>
using namespace std;
int main()
{
	char text1[33]="c ";
	char text2[33]="Programming";
	strcat (text1,text2);
//	text1 += text2; 
	cout<<text1;
	return 0;
	
}