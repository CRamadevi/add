#include<iostream>
using namespace std;
int main( )
{
	int n1=0,n2=1,t=0,n;
	cout<<"enter a number";
	cin>>n;
	cout<<"series="<<n1<<","<<n2<<",";
	t=n1+n2;
	while(t<=n)
	{
		cout<<t<<",";
		n1=n2;
		n2=t;
		t=n1+n2;
	}
	return 0;
}

