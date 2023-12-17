// Greatest Common Divisor
// based on Euclidean algorithm
#include <iostream>
#include <conio.h>
using namespace std;

int gcd(int num1, int num2)
{
	int r;
	r = num1 % num2;
	while(r != 0)
	{
		num1 = num2;
		num2 = r;
		r = num1 % num2;
	}
	return num2;
}
int main()
{
	int a,b;
	cin>>a>>b;
	
	cout<<gcd(a,b);
	return 0;
}
