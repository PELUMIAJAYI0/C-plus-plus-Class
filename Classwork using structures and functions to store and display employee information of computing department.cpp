//using structures and functions to store and display employee information of computing department
//information should be stored on a clean executable file
//employee information include Name, staffID, gender, DOB, addressetc.

//program to store information for 5 computing staff
#include<iostream>
using namespace std;

struct staff{
	string first_name;
	string surname;
	string gender;
	string address;
	string DOB;
	string staffID;
	int salary;
	string office_number;
};


int main()
{
	struct staff stud[2];
	
	for(int i=0; i<2; i++)
	{
		cout<<"...Computing Department Staff..."<<i+1<<endl;
		
		cout<<"Enter staff first name--->";
		cin>>stud[i].first_name;
		
		cout<<"Enter staff surname--->";
		cin>>stud[i].surname;
		
		cout<<"Enter gender--->";
		cin>>stud[i].gender;
		
		cout<<"Enter Date of Birth--->";
		cin>>stud[i].DOB;
		
		cout<<"Enter home address--->";
		cin>>stud[i].address;
		
		cout<<"Enter Staff ID--->";
		cin>>stud[i].staffID;
		
		cout<<"Enter Staff Salary--->";
		cin>>stud[i].salary;
		
		cout<<"Enter office number--->";
		cin>>stud[i].office_number;		
	}
	
	cout<<""<<endl;
	
	for(int i=0; i<2; i++)
	{
		cout<<"------Computing staff details----"<<endl;
		
		cout<<"Staff First Name--->"<<stud[i].first_name<<endl;	
		cout<<"Staff Surname Name--->"<<stud[i].surname<<endl;
		cout<<"Staff Gender--->"<<stud[i].gender<<endl;	
		cout<<"Staff Date of Birth--->"<<stud[i].DOB<<endl;
		cout<<"Staff Home Address--->"<<stud[i].address<<endl;
		cout<<"Staff ID--->"<<stud[i].staffID<<endl;
		cout<<"Staff Salary--->"<<stud[i].salary<<endl;
		cout<<"Staff Office Number--->"<<stud[i].office_number<<endl;
		cout<<""<<endl;
	}
}



