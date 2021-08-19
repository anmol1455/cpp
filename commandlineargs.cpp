#include<iostream>
#include<stdlib.h>
using namespace std;
int main(int n,char*arr[])
{
	int a,b,c=0;
	cout<<"argument count"<<n;
	cout<<"enter arguments";
	for(a=0;a<n;a++)	
	{
	cout<<"\t"<<arr[a];
	if(a!=0){
	c=c+atoi(arr[a]);
	}
}
	cout<<"sum="<<c;
	return 0;
}
