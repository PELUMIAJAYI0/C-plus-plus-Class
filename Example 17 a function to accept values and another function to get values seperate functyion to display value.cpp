//seperate function to display value 
//a function to accept values and another function to get values seperate functyion to display value

#include<iostream>
using namespace std;

struct Employee
{
	char name[50];
	int age;
	float salary;
};

Employee getData(Employee);
void displayData(Employee);

int main()
{
	//structure varaibles a, temp
	Employee a, temp;
	temp=getData(a);//getData(a) is a function call
	a=temp;
	displayData(a);
	return 0;
}

Employee getData(Employee a)
{
	cout<<"Enter your full name--->";
	cin.get(a.name, 50);
	
	cout<<"Age---> ";
	cin>>a.age;
	cout<<"Salary---> ";
	cin>>a.salary;
	return a;
}

void displayData(Employee a)
{
	cout<<"\n Displaying the employee's information--->"<<endl;
	cout<<"Name---> "<<a.name<<endl;
	cout<<"Age---> "<<a.age<<endl;
	cout<<"Salary---> "<<a.salary<<endl;
}

