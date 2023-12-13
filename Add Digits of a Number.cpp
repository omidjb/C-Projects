// add digits of a number
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int n,a,s;
	cin>>n;

	while(n>0)
	{
		a=n%10; 
		s+=a%10;
		n=n/10;
	}
	cout<<s;
	return 0;
}