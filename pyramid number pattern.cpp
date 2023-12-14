// pyramid number pattern
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int i,j,k;
	for(i=1; i<=5; i++) // number of floors
	{
		for(j=1; j<=5-i; j++)
			cout<<"   ";
		for(k=1; k<=2*i-1; k++)
			cout<<k<<"  "; // you can change k with *
		cout<<endl;
	}
	return 0;
}