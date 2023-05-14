#include<iostream>
using namespace std;
int main()
{
	int a[10];
	char c[10];
	float f[10];
	double d[10];
	
	cout<<"Size of int "<<sizeof(a)<<"Address of a "<<&a<<"Address of a +1"<<&a[1];
	cout<<"\nSize of char "<<sizeof(c)<<"Address of c "<<&c<<"Address of c +1"<<&c[1];
	cout<<"\nSize of float "<<sizeof(f)<<"Address of f "<<&f<<"Address of f +1"<<&f[1];
	cout<<"\nSize of double "<<sizeof(d)<<"Address of d "<<&d<<"Address of d +1"<<&d[1];
}
