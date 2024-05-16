//passing structure to function
//no condition to input values, have a seperate function to input your values 

#include<iostream>
using namespace std;

struct Employee
{
	char name[50];
	int age;
	float salary;
};

void displayData(Employee);

int main()
{
	Employee a;
	cout<<"Enter yout full name--->";
	cin.get(a.name,60);
	cout<<"Age--->";
	cin>>a.age;
	cout<<"Salary--->";
	cin>>a.salary;
	displayData(a);
	
	return 0;
}

void displayData(Employee a)
{
	cout<<"\n Displaying the employee's information."<<endl;
	cout<<"Name--->"<<a.name<<endl;
	cout<<"Age--->"<<a.age<<endl;
	cout<<"Salary--->"<<a.salary;
}
