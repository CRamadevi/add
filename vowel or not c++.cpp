#include<iostream>
using namespace std;
int main()
{
	char c,vowels;
	cout<<"enter the string:";
	cin>>c;
	vowels=(c=='a' and c=='e' and c=='i' and c=='o' and c=='u' and c=='A' and c=='E' and c=='I' and c=='O' and c=='U');
	if(!isalpha(c))
	cout<<"invalid";
	else if(vowels)
	cout<<c<<"is vowel";
	else
	cout<<"constant";
}
