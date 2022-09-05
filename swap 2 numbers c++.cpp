#include<iostream>
int main( )
{
	int a,b,temp;
	a=6;
	b=5;
	std::cout<<"before swapping";
	std::cout<<" a ="<<a<<" b ="<<b;
	temp=a;
	a=b;
	b=temp;
	std::cout<<"after swapping";
	std::cout<<" a="<<a<<" b="<<b;
	return 0;
}
