//inhertance in OOPs

#include<iostream>
using namespace std;

//parent class(base class)
class Animal
{
	public:
		void speak()
		{
			cout<<"Animal makes a sound"<<endl;
		}
};

//child class(derived class)
class Dog: public Animal
{
	public:
		void speak()
		{
			cout<<"Dog barks"<<endl;
		}
};

int main()
{
	Animal animal;
	Dog dog;
	animal.speak();
	dog.speak();
	
	return 0;
}
