#include<iostream>
#include<string>
using namespace std;
char x[32]="programming language";
void simple()
{
	char x[33]="language";
	cout<<"c is a  "<<x <<endl;
}
int main()
{
	simple();
	cout<<"c is "<<x;
	return 0;
}