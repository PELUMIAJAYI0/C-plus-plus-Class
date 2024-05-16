//member functions in c++ to display information about the person

#include<iostream>
using namespace std;

struct Person
{
	string first_name;
	string last_name;
	int age;
	float salary;
	
	//member function to display information about the person
	void display_info()
	{
		cout<<"First name---> " << first_name<<endl;
		cout<<"Last name---> " << last_name<<endl;
		cout<<"Age---> " << age<<endl;
		cout<<"Salary---> " << salary<<endl;
	}
};

int main()
{
	Person p1;
	
	cout<<"Enter first name--->";
	cin>>p1.first_name;
	cout<<"Enter last name--->";
	cin>>p1.last_name;
	cout<<"Enter age--->";
	cin>>p1.age;
	cout<<"Enter Salary--->";
	cin>>p1.salary;
	
	//display unformation using member function 
	cout<<"\n Display information."<<endl;
	p1.display_info();
	
	return 0;
}
