////inheritance in oops
//
//#include<iostream>
//using namespace std;
//
////creating parent class
//class Animal{
//	public: 
//		void speak()
//		{
//			cout<<"Animal Makes a sound"<<endl;
//		}
//};
//
//class Dog: public Animal{
//	public:
//		void speak()
//		{
//			cout<<"Dog barks"<<endl;	
//		}
//};
//class chicken: public Animal{
//	public:
//		void speak()
//		{
//			cout<<"The Chicken Crows"<<endl;
//		}
//};
//
//int main()
//{
//	Animal animal;
//	Dog dog;
//	chicken Chicken;
//	
//	animal.speak();
//	dog.speak();
//	Chicken.speak();
//}

#include<iostream>
using namespace std;

class Mother{
	public:
		void eat()
		{
			cout<<"Eats"<<endl;
		}
		
		void sleep()
		{
			cout<<"Sleep"<<endl;
		}
		void wake()
		{
			cout<<"Wake"<<endl;
		}
};
class Father: public Mother{
	public:
		void work()
		{
			cout<<"Father Works"<<endl;
		}
		void prays()
		{
			cout<<"Father Prays"<<endl;
		}
		void speaks()
		{
			cout<<"Father Speaks"<<endl;
		}
};

class Baby:public Father{
	public:
		void cry()
		{
			cout<<"Cries"<<endl;
		}
		void laughing()
		{
			cout<<"Laughing"<<endl;
		}
};

int main()
{
	Baby baby;
	
	baby.eat();
	baby.sleep();
	baby.wake();
	
	baby.prays();
	baby.work();
	baby.speaks();
	
	baby.cry();
	baby.laughing();
}
