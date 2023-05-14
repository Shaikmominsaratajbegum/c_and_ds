#include<iostream>
using namespace std;

int main()
{
	int j,limit;
	int i,r,fcnt;
	cout<<"\n Enter limit";
	cin>>limit;
	j=1;
	while(j<=limit)
	{
		fcnt=0;
		i=1;
		while(i<=j)
		{
			r=j%i;
			if(r==0)
			{	
				fcnt++;
			}
			i++;
		}
		if(fcnt==2)
		{
			cout<<j<<"\n";
		}
		j++;
		
	}
	
}

