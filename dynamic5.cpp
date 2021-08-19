#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int s,*ptr,sum=0,n,ns,i,t,j;
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
	}
 for(i=0;i<s;i++)
   {
     for (j=0;j<=i;j++)
      {
        if (*(ptr+i) < *(ptr+j))
          {
			t=*(ptr+i);
			*(ptr+i)=*(ptr+j);
			*(ptr+j)=t;
		}
		
}
	}
		for(i=0;i<s;i++)
	{
			cout<<*(ptr+i)<<"\t";
		
	}
}
