#include<iostream>
using namespace std;
class college
{
	public:
		void a()
		{
			cout<<"a";
		}
};
class sem
{
	public:
		void b()
		{
			cout<<"b";
		}
};
class marks:public college
{
	public:
		void c()
		{
			cout<<"c";
		}
};
class extra:public sem,public college
{
	public:
		void d()
		{
			cout<<"d";
		}
};
class result:public sem,public extra
{
	public:
		void e()
		{
			cout<<"e";
		}
};


int main()
{
	marks obj1;
	extra obj2;
	result obj3;
	obj1.c();
	obj1.a();
	obj2.d();
	obj2.b();
	obj2.a();
	obj3.e();
	obj3.d();
	obj3.a();
	return 0;
}
