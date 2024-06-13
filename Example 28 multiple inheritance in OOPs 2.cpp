//multiple inheritance 

#include<iostream>
using namespace std;

class Base1
{
	public:
		float salary = 900;
};

class Base2
{
	public:
		float bonus = 100;
};

class Derived: public Base1, public Base2
{
	public:
		void sum()
		{
			cout<<"Your Total Salary is---> "<<(salary+bonus)<<endl;
		}
};

int main()
{
	//creating an object of the derived class and callind the sum() function
	Derived x;
	x.sum();
	
	return 0;
}
