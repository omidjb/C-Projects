// Fibonacci Sequence bound
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
// 0 1 1 2 3 5 8 13 21 34 ...
	unsigned int bound;
	cout<<"enter your bound: ";
	cin>>bound;
	unsigned int f0=0,f1=1,f2;
	while(true)
	{
		f2=f1+f0;
		if(f2>bound) break;
		cout<<f2<<"  ";
		f0=f1;
		f1=f2;
	}
	getch();

	return 0;
}