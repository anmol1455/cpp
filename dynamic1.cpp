#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int **p,*ptr,a;
	float *fptr,b=10;
	int x,y;
	fptr=&b;
	a=5;
	ptr=&a;
	p=&ptr;
	*ptr=(*ptr)*10;
	cout<<"size of ptr "<<sizeof(ptr)<<endl;
	cout<<"size of a "<<sizeof(a)<<endl;
	cout<<"address of ptr "<<ptr<<endl;
	cout<<"address of p "<<*p<<endl;
	cout<<"value of p "<<*(*p)<<endl;
	cout<<"value of a "<<a<<endl;
	cout<<"address of a "<<&a<<endl;
	cout<<"address of ptr "<<&ptr<<endl;
	cout<<"value at that address "<<*ptr<<endl;
	cout<<"Size of fptr "<<sizeof(fptr)<<endl;
}
