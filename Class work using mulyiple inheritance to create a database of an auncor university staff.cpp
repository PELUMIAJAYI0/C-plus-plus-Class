//using multiple ineritance
//to create a database for staff management in anchor university

#include<iostream>
using namespace std;

class Staff{
	public:
		string name;
		int number;
		string qualification;
		
		void staff()
		{
			cout<<"Input the staff name---> ";
			cin>>name;
			cout<<"Input the staff number---> ";
			cin>>number;
			cout<<"Input the staff qualification---> ";	
			cin>>qualification;
		}
		void display_staff()
		{
			cout<<"The name of the staff is---> "<<name<<endl;
			cout<<"The staff number is---> "<<number<<endl;
			cout<<"The qualification of the staff is---> "<<qualification<<endl;
			cout<<""<<endl;
		}	
};

class Department{
	public:
		string course_teaching;
		string administrative_work;
		
		void department()
		{
			cout<<"Input the course the staff is teaching---> ";
			cin>>course_teaching;
			cout<<"Input the administrative work of the staff---> ";
			cin>>administrative_work;
		}
		void display_department()
		{
			cout<<"The course the staff is teaching is---> "<<course_teaching<<endl;
			cout<<"The administrative work of the staff is---> "<<administrative_work<<endl;
			cout<<""<<endl;
		}
};

class Wages: public Staff, public Department{
	public:
		int basic_salary;
		int allowances;
		int bonuses;
		int gross_salary;
		
		void wages()
		{
			cout<<"Input the basic salary of the staff---> ";
			cin>>basic_salary;
			cout<<"Input the allowances of the staff---> ";
			cin>>allowances;
			cout<<"Input the bonuses of the staff---> ";
			cin>>bonuses;
			cout<<"The gross salary of the wages is ---> "<<(basic_salary+allowances+bonuses)<<gross_salary;
		}
		void display_wages()
		{
			cout<<"The basic salary of the staff is---> "<<basic_salary<<endl;
			cout<<"The allowances of the staff is---> "<<allowances<<endl;
			cout<<"The bonuses of the staff is ---> "<<bonuses<<endl;
			cout<<"The gross salary of the staff is---> "<<(basic_salary+allowances+bonuses)<<gross_salary;
			cout<<""<<endl;
		}
};

int main()
{
	Wages w;
	w.staff();
	w.department();
	w.wages();
	
	system("cls");
	
	w.display_staff();
	w.display_department();
	w.display_wages();	
	
	
}
