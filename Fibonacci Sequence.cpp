// Fibonacci Sequence
#include<iostream>
#include <conio.h>
using namespace std;

int main()
{
//  0 1 1 2 3 5 8 13 21 34 55 ...
//  0 1 2 3 4 5 6 7  8  9  10 ...

	int n;
	cin>>n;
	int f0=0,f1=1,f2;
	
	if(n==1)
		cout<<1;
	else
	{
		for(int i=1; i<n; i++)
		{
			f2=f0+f1;
			f0=f1;
			f1=f2;
		}
		cout<<f2;
	}
	getch();

	return 0;
}
