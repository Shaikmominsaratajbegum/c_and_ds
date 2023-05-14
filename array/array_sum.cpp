#include<iostream>
using namespace std;

int main()
{
	int a[10]; // integer Array 
	int i;
	int sum=0;
	float avg;
	/*
	cout<<"\n Enter 10 number";
	cin>>a[0];
	cin>>a[1];
	cin>>a[2];
	cin>>a[3];
	cin>>a[4];
	cin>>a[5];
	cin>>a[6];
	cin>>a[7];
	cin>>a[8];
	cin>>a[9];
	*/
	for(i=0;i<10;i++)
	{
		cout<<"\n Enter a number";
		cin>>a[i];
		sum=sum+a[i];
		
	}
	avg =sum/10.0;
	cout<<"\n Sum is "<<sum;
	cout<<"\n Average is"<<avg;
	return 0;
}
 
