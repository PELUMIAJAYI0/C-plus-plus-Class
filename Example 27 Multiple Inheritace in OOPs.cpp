//Multiple Inheritace
//the derived class inherit from the two base class

#include<iostream>
using namespace std;

class Animal
{
	public:
		void animal(string name)
		{
			cout<<name<<"is an animal. \n";
		}
};

class Aerial
{
	public:
		void aerial(string name)
		{
			cout<<name<<" can fly in the air. \n";
		}
};

class Bird: private Animal, private Aerial
{
	public:
		void display(string name)
		{
			animal(name);
			aerial(name);
		}
};

int main()
{
	Bird B;
	B.display("Eagle");
	
	return 0;
}
