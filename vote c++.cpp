#include<iostream>
using namespace std;
int main()
{
int age,n;
cout<<"enter age:";
cin>>age;
if(age<=1)
cout<<"invalid";
else if(age>=18)
cout<<"you are eligible for vote";
else
{
cout<<"you are not eligible for vote";
n=18-age;
cout<<"\n you are allowed for vote after"<<n<<"years";
}
}
