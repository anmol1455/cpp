#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int s,*ptr,sum=0,n,ns,i;
	cout<<"\n enter size of array:";
	cin>>s;
	//ptr=(int*)malloc(s*sizeof(int));
	ptr=(int*)calloc(s,sizeof(int));
	for(i=0;i<s;i++)
	{
		cout<<"enter number "<<i+1<<endl;
		cin>>*(ptr+i);
	}
	cout<<"all elements are \n";
	for(i=0;i<s;i++)
	{
		cout<<*(ptr+i)<<"\t";
		sum=sum+*(ptr+i);
	}
	cout<<"sum= "<<sum;
	cout<<"enter numbers you want to add";
	cin>>ns;
	ptr=(int *)realloc(ptr,ns*sizeof(int));
	for(i=s;i<(s+ns);i++)
	{
		cout<<"enter numbers"<<i+1<<endl;
		cin>>*(ptr+i);
		sum=sum+*(ptr+i);
	}
	cout<<"all elements are \n";
	for(i=0;i<(s+ns);i++){
		cout<<*(ptr+i)<<"\t";
	}
	cout<<"sum= "<<sum;
	free(ptr);
}
