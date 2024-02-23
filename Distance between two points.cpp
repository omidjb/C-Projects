// Distance between two Points
#include<iostream>
#include<cmath>
using namespace std;

double p(float num)
{
	return num*num;
}
float distance(float x1, float y1, float x2, float y2)
{
	return sqrt(p(x2-x1)+p(y2-y1)); //length of the line segment
}

int main()
{
	float x1,y1,x2,y2;
	
	cout<<"enter x1: ";
	cin>>x1;
	cout<<"enter y1: ";
	cin>>y1;
	cout<<"enter x2: ";
	cin>>x2;
	cout<<"enter y2: ";
	cin>>y2;
	
	cout<<distance(x1,y1,x2,y2);
	
	return 0;
}