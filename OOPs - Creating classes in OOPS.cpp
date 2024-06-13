//creating classes in OOPs
#include<iostream>
using namespace std;

class Employee{
public://access modifier - public, private, protected
	string name;
	string company;
	int age;
	
	void IntroduceYourself(){
		cout<<"Name - "<<name<<endl;
		cout<<"Company - "<<company<<endl;
		cout<<"Age - "<<age<<endl;
	}
	
	//creaing a constructor
	Employee(string name, string company, int age): name(name), company(company), age(age)
	{
	}
};

int main()
{
	//Employee emp1;
	Employee emp1 = Employee("Pelumi", "Anchor University", 20);
	//emp1.name="Ajayi Pelumi";
	//emp1.company="Anchor University";
	//emp1.age=20;
	emp1.IntroduceYourself();
	
	Employee emp2 = Employee("Fiyin", "Anchor University", 20);
	//emp2.name="Ajayi Fiyin";
	//emp2.company="Deeper Life High School";
	//emp2.age=20;
	emp2.IntroduceYourself();
}
