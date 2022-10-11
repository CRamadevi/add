#include<iostream>
using namespace std;
int main()
{
	int n,m,i,j;
	cout<<"enter te number of rows:";
	cout<<"enter the number of colums";
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(i==1 and i==n-1 and j==1 and j==m-1)
			{
				cout<<"*";
			}
			else
			cout<<" ";
		}
	}
	return 0;
}
