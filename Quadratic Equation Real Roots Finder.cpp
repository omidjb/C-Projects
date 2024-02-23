// Quadratic Equation Real Roots Finder
#include <iostream>
#include <conio.h>
#include <cmath> // we need to solve square root
using namespace std;

int main()
{
	cout<<"ax^2 + bx + c = 0"<<endl;
	
	double a,b,c;     // coefficients
	cout<<"enter a: ";
	cin>>a;
	cout<<"enter b: ";
	cin>>b;
	cout<<"enter c: ";
	cin>>c;
	
	double delta;       // discriminant
	delta = b*b - 4*a*c;
	
	double root_1, root_2; // roots

	if(delta<0)
		cout<<"quadratic equation hasn't real answer!"<<endl;
		
	else if(delta == 0)  
	{
		root_1 = root_2 = (-b)/(2*a);
		cout<<"x1 = x2 = "<<root_1;
	}
	else
	{
		root_1 = ((-b) + sqrt(delta)) / (2*a);
		root_2 = ((-b) - sqrt(delta)) / (2*a);
		
		cout<<"x1 = "<<root_1<<endl;
		cout<<"x2 = "<<root_2<<endl;
	}
	
	return 0;
}
