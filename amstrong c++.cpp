#include<iostream>
using namespace std;
int main()
{
	int n,remainder,rev=0;
	cout<<"enter the number:";
	cin>>n;
	while(n!=0)
	{
		remainder=n%10;
		rev=rev*10+remainder;
		n=n/10;
	}
	cout<<rev;
	return 0;
}
