#include<iostream>
#include<conio.h>
using namespace std;
void swap(int *a,int *b){
	int t;
	t=*a;
	*a=*b;
	*b=t;
	cout<<"value of a in swap"<<*a<<endl;
	cout<<"value of b in swap"<<*b<<endl;
}
int main()
{
int x,y;
cout<<"enter x and y";
cin>>x>>y;
swap(&x,&y);
cout<<"after swapping"<<endl<<"value of x "<<x<<"value of y "<<y;
}
