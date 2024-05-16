//Array of structures 

#include<iostream>
using namespace std;

struct student 
{
	char name[50];
	int roll_no;
	int contact;
};

int main()
{
	struct student stud[4];//created an arry of structures which will hold 4 set of values
	
	for(int i=0; i<4; i++)
	{
		cout<<"...Student..."<<i+1<<endl;
		
		cout<<"Enter student name--->";
		cin>>stud[i].name;
		
		cout<<"Enter Roll no--->";
		cin>>stud[i].roll_no;
		
		cout<<"Enter Contact No--->";
		cin>>stud[i].contact;		
	}
	
	cout<<"\n Display Student Information"<<endl;
	
	for(int i=0; i<4; i++)
	{
		cout<<"Student Name--->"<<stud[i].name<<endl;	
		cout<<"Roll Number--->"<<stud[i].roll_no<<endl;	
		cout<<"Contact No--->"<<stud[i].contact<<endl;
	}
	return 0;
}

