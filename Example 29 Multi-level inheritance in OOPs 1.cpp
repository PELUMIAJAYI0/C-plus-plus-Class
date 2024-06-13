//multilevel inheritance

#include<iostream>
using namespace std;

//Base class
class Vehicle
{
	public:
		Vehicle()
		{
			cout<<"This is a vehicle. \n";
		}
};

//intermediate class
class FlyingObject: public Vehicle
{
	public:
		FlyingObject()
		{
			cout<<"This vehicle can fly in the air. \n";
		}	
};

//Derived class
class Aeroplane: public FlyingObject
{
	public:
		Aeroplane()
		{
			cout<<"Aeroplane has wings. \n";
		}	
};

int main()
{
	Aeroplane obj;
	
	return 0;
}
