#include<iostream>
using namespace std;
int main()
{
	int a[5];
	int i;
	int s=0;
	cout<<"\n Enter 5 elements";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
		s=s+a[i];
	}
	
	cout<<"\n Entered elements are \n";
	for(i=0;i<5;i++)
	{
		cout<<"\n "<<i <<" Value is "<<a[i];
	}
	    
	cout<<"\n Sum is "<<s;
	
}


