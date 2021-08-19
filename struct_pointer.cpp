#include "iostream"
using namespace std;
struct student
{
	int roll;
	char name[10];
	float fee;
	char course[10];
};
int main()
{
	int i;
	struct student *p,s[10];
	s[0].roll=45;
	s[1].roll=88;
	cout<<s[0].roll<<endl;
	p=s;//not address only structure is assigned to pointers
	cout<<(p+1)->roll<<endl;
}
