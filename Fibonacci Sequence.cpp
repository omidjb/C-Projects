#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int f0=0;
	int f1=1;
	int f2;
	for(int i=1; i<n; i++)
	{
		f2=f0+f1;
		f0=f1;
		f1=f2;
	}
	cout<<f2;
	
	return 0;
}