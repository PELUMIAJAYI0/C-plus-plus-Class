//program to create structure to store student details using structures

#include<iostream>
#include<stdlib.h>
using namespace std;

struct student_details
{
	string full_name;
	string matric_no;
	int age;
	string gender;
};

int main()
{
	student_details std1, std2, std3;
	
	//input first student details 
	cout<<"Enter Student 1 name---> ";
	//cin>>std1.full_name;
	getline(cin, std1.full_name);
	
	cout<<"Enter Student 1 matriculation number---> ";
	cin>>std1.matric_no;
	
	cout<<"Enter Student 1 age---> ";
	cin>>std1.age;
	
	cout<<"Enter Student 1 gender---> ";
	cin>>std1.gender;
	
	cout<<""<<endl;
	//input second student details 
	cout<<"Enter Student 2 name---> ";
	cin>>std2.full_name;
	
	cout<<"Enter Student 2 matriculation number---> ";
	cin>>std2.matric_no;
	
	cout<<"Enter Student 2 age---> ";
	cin>>std2.age;
	
	cout<<"Enter Student 2 gender---> ";
	cin>>std2.gender;
	
	cout<<""<<endl;
	//input third student details 
	cout<<"Enter Student 3 name---> ";
	cin>>std3.full_name;
	
	cout<<"Enter Student 3 matriculation number---> ";
	cin>>std3.matric_no;
	
	cout<<"Enter Student 3 age---> ";
	cin>>std3.age;
	
	cout<<"Enter Student 3 gender---> ";
	cin>>std3.gender;
	
	cout<<""<<endl;
	
	system("cls");
	//display students details
	cout<<"Student 1 details"<<endl;
	cout<<"Name---> "<<std1.full_name<<endl;
	cout<<"Matriculation number---> "<<std1.matric_no<<endl;
	cout<<"Age---> "<<std1.age<<endl;
	cout<<"Gender---> "<<std1.gender<<endl;
	
	cout<<""<<endl;
	cout<<"Student 2 details"<<endl;
	cout<<"Name---> "<<std2.full_name<<endl;
	cout<<"Matriculation number---> "<<std2.matric_no<<endl;
	cout<<"Age---> "<<std2.age<<endl;
	cout<<"Gender---> "<<std2.gender<<endl;
	
	cout<<""<<endl;
	cout<<"Student 3 details"<<endl;
	cout<<"Name---> "<<std3.full_name<<endl;
	cout<<"Matriculation number---> "<<std3.matric_no<<endl;
	cout<<"Age---> "<<std3.age<<endl;
	cout<<"Gender---> "<<std3.gender<<endl;
	
	
}


