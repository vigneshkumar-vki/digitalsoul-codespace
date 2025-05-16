#include<iostream>
#include<string>
using namespace std;
int main()
{
	char text1[33];
	char text2[33];
	cout<<"Enter first string"<<endl;
	cin>>text1;
	cout<<"Enter second string"<<endl;
	cin>>text2;
	strcat(text1,text2);
	cout<<"The final string after concatenation is "<<text1;
	return 0;
	
}