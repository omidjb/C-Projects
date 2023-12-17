// a simple power function
#include <iostream>
#include <conio.h>
using namespace std;

double pow(int base, int power)
{
	double p=1;
	for(int i=1; i<=power; i++)
		p*=base;
	return p;
}

int main()
{
	int a,b;
	cin>>a>>b;
	cout<<pow(a,b)
	
	return 0;
}
