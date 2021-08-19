#include<iostream>
using namespace std;
class emp
{
	int c;
	public:
		void sum(int x,int y)
		{
			c=x+y;
			cout<<"sum of \t"<<x<<"and \t"<<y<<"is \t"<<c;
		}
	//private:
		void subs(int x,int y)
		{
			c=x-y;
			cout<<"substraction of \t"<<x<<"and \t"<<y<<"is \t"<<c;
		}
};
int main()
{
	emp e;
	e.sum(20,40);
	e.subs(50,20);
}
