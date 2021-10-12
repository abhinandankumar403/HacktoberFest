/*Problem 2*/
#include<iostream>
using namespace std;

struct point
{
int x;
int y;
};

int main()
{
	point a,b,c;
	cout<<"Enter coords for p1:";
	cin>>a.x>>a.y;
	cout<<"Enter coords for p2:";
	cin>>b.x>>b.y;
	
	c.x=a.x+b.x;
	c.y=a.y+b.y;
	cout<<"coords of p1+p2 are :"<<c.x<<","<<c.y;
}
