// ASCII Character Codes in Decimal
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	for(int i=-128; i<=127; i++)
	{
		cout.width(4);
		cout<<i<<" = "<<char(i);
		cout<<endl;
	}
	getch();

	return 0;
}