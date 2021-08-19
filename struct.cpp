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
	int i,c=0;
	struct student s[10];
	cout<<"size of s: "<<sizeof(s)<<endl;
	for(i=0;i<=3;i++)
	{
		c++;
		cout<<"enter name: "<<endl;
		cin>>s[i].name;
		cout<<"enter roll no: "<<endl;
		cin>>s[i].roll;
		cout<<"enter fee: "<<endl;
		cin>>s[i].fee;
		cout<<"enter course: "<<endl;
		cin>>s[i].course;
	}
	cout<<"all details are........: "<<endl;
	for(i=0;i<=3;i++)
	{
		cout<<"your name: "<<s[i].name<<endl;
		cout<<"your roll no: "<<s[i].roll<<endl;
		cout<<"your fee: "<<s[i].fee<<endl;
		cout<<"your course: "<<s[i].course<<endl;
	}
	return 0;
}
