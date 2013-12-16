#include<iostream>
using namespace std;

class cylinder
{
public:
	cylinder(double a,double b)
	{
		radius = a;
		height = b;
	}


	double area()
	{
		return 3.14*radius*radius*2+ 2*3.14*radius*height;
	}

	double volume()
	{
		return 3.14*radius*radius*height;
	}

	void print()
	{
		cout<<"Radius="<<radius;cout<<" height="<<height<<endl;
		cout<<"area="<<area();cout<<" volume="<<volume()<<endl;
	}

	double radius;
	double height;
};

int main(int argc, char const *argv[])
{
	cylinder a(1,1);
	a.print();
	return 0;
}
