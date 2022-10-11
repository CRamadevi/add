#include<iostream>
#include<cstring>
using namespace std;
int main()
{
char a[20],b[20];
cout<<"enter user name";
cin>>a;
cout<<"reenter user name";
cin>>b;
int i=strlen(a),c=0;
for(int i=0;i<i;i++)
{
if(a[i]==b[i])
{
c++;
}
}
if(i==c)
{
cout<<"user name is valid";
}
else
{
cout<<"user name is invalid";
}
}
