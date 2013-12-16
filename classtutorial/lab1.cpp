#include < iostream >
using namespace std;

class ClsName
{
public:
	ClsName(int a)
	{
		cout<<"first way to call "<< endl;
		this->x = a;
	}
	ClsName(int a,int b)
	{
		cout<<"second way to call"<< endl;
		this->x = a;
		this->y = b;
	}
	ClsName()
	{
		cout<<"third way to call"<< endl;
		this->x = 1;
		this->y = 2;
	}


	int getX()
	{
		return this->x;
	}
	int getY()
	{
		return this->y;
	}

	void SetX(int a)
	{
		this->x = a;
	}

	void SetY(int b)
	{
		this->y = b;
	}

	void Pri()
	{
		cout<<"x="<< x <<" y="<< y<< endl;
	}

	int x;
	int y;
};

int main(int argc,char **argv)
{
	ClsName a;
	ClsName b(1);
	a.Pri();
	cout<< b.getX()<< endl;
	b.SetX(250);
	b.SetY(320);
	b.Pri();
	ClsName c(100,200);
	c.Pri();
	
return 0;
}