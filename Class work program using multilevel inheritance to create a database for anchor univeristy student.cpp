//program using multilevel inheritance to create a database for anchor univeristy student
#include<iostream>
using namespace std;

class Student{
	public:
		string name;
		string matric_number;
		string programme;
		void student()
		{
			cout<<"Input the name of the student---> "<<endl;
			cin>>name;
			cout<<"Input the studebt matric number---> "<<endl;
			cin>>matric_number;
			cout<<"Input the student programme---> "<<endl;
			cin>>programme;
		}
		
		void display_student()
		{
			cout<<"The Student name is---> "<<name<<endl;
			cout<<"The student matriculation number is---> "<<matric_number<<endl;
			cout<<"The Student programme is---> "<<programme<<endl;
		}
};

class CGPA: public Student{
	public: 
	int year1cgpa;
	int year2cgpa;
	int year3cgpa;
	int year4cgpa;
	
	void cgpa()
	{
		cout<<"Input the student year one CGPA--> "<<endl;
		cin>>year1cgpa;
		cout<<"Input the student year two CGPA--> "<<endl;
		cin>>year2cgpa;
		cout<<"Input the student year three CGPA--> "<<endl;
		cin>>year3cgpa;
		cout<<"Input the student year four CGPA--> "<<endl;
		cin>>year4cgpa;
	}
	
	void display_cgpa()
	{
		cout<<"The Student Year One CGPA is---> "<<year1cgpa<<endl;
		cout<<"The Student Year Two CGPA is---> "<<year2cgpa<<endl;
		cout<<"The Student Year Three CGPA is---> "<<year3cgpa<<endl;
		cout<<"The Student Year Four CGPA is---> "<<year4cgpa<<endl;
	}
};
class Grade: public CGPA{
	public:
		int calculate_grade;
		void grade()
		{
			calculate_grade = (year1cgpa+year2cgpa+year3cgpa+year4cgpa)/4;
		}
		
		void display_grade()
		{
			cout<<"The total CGPA is---> "<<calculate_grade<<endl;
		}
};

int main()
{
	Grade g;
	
	g.student();
	g.cgpa();
	g.grade();
	
	system("cls");
	cout<<"...The  database for student in anchor university..."<<endl;
	g.display_student();
	g.display_cgpa();
	g.display_grade();
}
