// Boolean Operators Truth tabel
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	for(int i=0; i<=1; i++)
		cout<<"NOT "<<i<<" = "<<!i<<endl;
	
	cout<<endl;

	for(int i=0; i<=1; i++)
		cout<<"Buffer "<<i<<" = "<<i<<endl;

	cout<<endl;
	
	for(int i=0; i<=1; i++)
		for(int j=0; j<=1; j++)
			cout<<i<<" AND "<<j<<" = "<<(i&&j)<<endl;

	cout<<endl;

	for(int i=0; i<=1; i++)
		for(int j=0; j<=1; j++)
			cout<<i<<" OR "<<j<<" = "<<(i||j)<<endl;

	cout<<endl;

	for(int i=0; i<=1; i++)
		for(int j=0; j<=1; j++)
			cout<<i<<" NAND "<<j<<" = "<<!(i&&j)<<endl;

	cout<<endl;

	for(int i=0; i<=1; i++)
		for(int j=0; j<=1; j++)
			cout<<i<<" NOR "<<j<<" = "<<!(i||j)<<endl;

	cout<<endl;

	for(int i=0; i<=1; i++)
		for(int j=0; j<=1; j++)
			cout<<i<<" XOR "<<j<<" = "<<(i^j)<<endl;

	cout<<endl;

	for(int i=0; i<=1; i++)
		for(int j=0; j<=1; j++)
			cout<<i<<" XNOR "<<j<<" = "<<!(i^j)<<endl;

	return 0;
}