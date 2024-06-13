//single inheritance in OOPs 

#include<iostream>
using namespace std;

//base class
class Mother
{
	public:
		void eat()
		{
			cout<<"Eats.\n";
		}
		void sleep()
		{
			cout<<"Sleeps.\n";
		}
};

//derived class
class Baby: public Mother
{
	public:
		void cry()
		{
			cout<<"Cries.\n";
		}
};

//main function
int main()
{
	//create object of the class baby
	Baby b;
	
	//calling members of the base class
	b.eat();
	b.sleep();
	
	//calling out the member of the derived class
	b.cry();
	
	return 0;
}
