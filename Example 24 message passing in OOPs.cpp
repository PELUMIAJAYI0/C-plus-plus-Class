//message passing in OOPs 

#include<iostream>
using namespace std;

//Define a Car Class with a method to display its speed
class Car{
	public:
		void displaySpeed(int speed){
			cout<<"The Car is moving at "<<speed<<"Km/h"<<endl;
		}
};

int main()
{
	//create a Car object named myCar
	Car myCar;
	
	//send message to myCar to execute the displaySpeed method
	int currentSpeed = 100;
	myCar.displaySpeed(currentSpeed); //This is called message passing
	
	return 0;
}
