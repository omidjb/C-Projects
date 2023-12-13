// Counter of characters in a string
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	char ch; // to store the characters
	int i; // for counter
	
	// It receives the characters until the user presses enter
	for(i=0; ch= cin.get() != char(10); i++);
	cout<<i;
	
	return 0;
}
