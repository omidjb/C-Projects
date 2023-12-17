// a simple Exponentiation function
#include <iostream>
#include <conio.h>
using namespace std;

double pow(int base, int exponent)
{
	double p=1;
	for(int i=1; i<=exponent; i++)
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
