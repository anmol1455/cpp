#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int *ptr,s,i,sum=0;
	cout<<"enter size:";
	cin>>s;
	ptr=new int[s];
	for(i=0;i<s;i++)
	{
		cout<<"enter number "<<i+1<<endl;
		cin>>*(ptr+i);
	}
	//delete(int *)ptr;
	cout<<"all elements are:\n";
	for(i=0;i<s;i++)
	{
		cout<<*(ptr+i);
		sum=sum+*(ptr+i);
	}
	cout<<"sum="<<sum;
}
