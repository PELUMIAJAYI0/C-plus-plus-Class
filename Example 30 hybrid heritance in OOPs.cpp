//hybrid heritance in C++

#include<iostream>
using namespace std;

class X{
	public:
		int x;
		void getX()
		{
			cout<<"Enter the value of x--->";
			cin>>x;
		}
};

class Y: public X{
	public:
		int y;
		void getY()
		{
			cout<<"Enter the value of Y--->";
			cin>>y;
		}
};

class Z{
	public:
		int z;
		void getZ()
		{
			cout<<"Enter the value of z--->";
			cin>>z;
		}
};

class A: public Y, public Z{
	public:
		int d;
		void Product()
		{
			getX();
			getY();
			getZ();
			cout<<"The product of x, y, z is--->"<<x*y*z<<endl;
		}
};

int main()
{
	A obj;
	obj.Product();
	
	return 0;
}
