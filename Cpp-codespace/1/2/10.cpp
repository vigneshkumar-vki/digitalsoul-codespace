#include<iostream>
using namespace std;
int main()
{
	int a=33,b=3,c;
	c=a+b;
	cout<<"value of c is "<<c<<endl;
	c+=a;
	cout<<"value of c is "<<c;
	c-=a;
	cout<<"value of c is "<<c;
	c*=a;
	cout<<"value of c is "<<c;
	c/=a;
	cout<<"value of c is "<<c;
	c%=a;
	cout<<"value of c is "<<c;
	
	c=5;
	c&=a;
	cout<<"value of c is "<<c;
	c|=a;
	cout<<"value of c is "<<c;
	c^=a;
	cout<<"value of c is "<<c;
	
	c=5;
	c>>=a;
	cout<<"value of c is "<<c;
	c<<=a;
	cout<<"value of c is "<<c;
	return 0;
}