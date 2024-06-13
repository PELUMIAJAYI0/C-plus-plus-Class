//program to store and print out patient data

#include<iostream>
using namespace std;

struct patient_details{
	string patient_name;
	int patient_age;
	string patient_address;
	string patient_gender;
};

int main()
{
	patient_details p1, p2;
	
	cout<<"Input the first patient name---> ";
	getline(cin, p1.patient_name);
	
	cout<<"Input the first patient age---> ";
	cin>>p1.patient_age;
	
	cout<<"Input the first patient address---> ";
	getline(cin, p1.patient_address);
	
	cout<<"Input the first patient gender---> ";
	cin>>p1.patient_gender;
	
		
	cout<<"Input the second patient name---> ";
	getline(cin, p2.patient_name);
	
	cout<<"Input the second patient age---> ";
	cin>>p2.patient_age;
	
	cout<<"Input second patient address---> ";
	getline(cin, p2.patient_address);
	
	cout<<"Input the second patient gender---> ";
	cin>>p2.patient_gender;
	
	system("cls");
	cout<<"Name---> "<<p1.patient_name<<endl;
	cout<<"Age---> "<<p1.patient_age<<endl;
	cout<<"Address---> "<<p1.patient_address<<endl;
	cout<<"Gender---> "<<p1.patient_gender<<endl;
	
	cout<<"Name---> "<<p2.patient_name<<endl;
	cout<<"Age---> "<<p2.patient_age<<endl;
	cout<<"Address---> "<<p2.patient_address<<endl;
	cout<<"Gender---> "<<p2.patient_gender<<endl;
}
