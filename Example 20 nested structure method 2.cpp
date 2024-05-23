//nested structure method 2

#include<iostream>
using namespace std;

struct student{
	char name[30];
	int rollNumber;
	struct date_of_birth
	{
		int dd;
		int mm;
		int yy;
	}dob;
};

int main()
{
	student s;
	cout<<"Enter name:";
	cin.getline(s.name,25);
	cout<<"Enter roll number:";
	cin>>s.rollNumber;
	cout<<"Enter date of birth(dd mm yy):";
	cin>>s.dob.dd>>s.dob.mm>>s.dob.yy;
	
	cout<<"Name:"<<s.name;
	cout<<"Roll Number:"<<s.rollNumber<<endl;
	cout<<"Date of Birth:"<<s.dob.dd<<"/"<<s.dob.mm<<"/"<<s.dob.yy<<endl;
}
