#include "iostream"
#include "stdlib.h"
using namespace std;
class a
{
	public:
		a(int x)
		{
			cout<<"value of x is"<<x<<endl;
		}
		void fun1()
		{
			cout<<"fun1 of class a"<<endl;
		}
};
class c:virtual public a 
{		public:
		c(int x):a(x)
		{
			cout<<"value of x is"<<x<<endl;
		}
		void fun2()
		{
			cout<<"fun2 of class c"<<endl;
		}
};

class d:virtual public a 
{
		public:
		d(int x):a(x)
		{
			cout<<"value of x is"<<x<<endl;
		}
		void fun3()
		{
			cout<<"fun3 of class d"<<endl;
		}
};
class b:public c,public d
{
		public:
		b(int y,int x):c(x),d(x),a(x)
		{
			cout<<"value of x is"<<x<<endl;
			cout<<"value of y is"<<y<<endl;
		}
		void fun4()
		{
			cout<<"fun4 of class b"<<endl;
		}
};
int main()
{
	b obj(5,10);
	obj.fun1();
	obj.fun2();
	obj.fun3();
	obj.fun4();
}

