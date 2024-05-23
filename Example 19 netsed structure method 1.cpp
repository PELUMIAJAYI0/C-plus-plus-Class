//netsed structure 
#include<iostream>
using namespace std;

struct addr{
	int houseno;
	string area;
	string city;
	string state;
};
struct emp{
	int id;
	string name;
	addr address;  //complex element
};

int main()
{
	emp e;
	
	cout<<"Enter the ID--->";
	cin>>e.id;
	
	cout<<"Enter the Name--->";
	cin>>e.name;
	
	cout<<"Enter the House Number--->";
	cin>>e.address.houseno;
	
	cout<<"Enter the Area--->";
	cin>>e.address.area;
	
	cout<<"Enter the city--->";
	cin>>e.address.city;
	
	cout<<"Enter the State--->";
	cin>>e.address.state;
	
	cout<<"\n \n EmployeeID--->"<<e.id;
	cout<<"\n Employee Name--->"<<e.name;
	cout<<"\n Address--->";
	cout<<"\n"<<e.address.houseno<<",";cout<<e.address.area<<","<<e.address.city<<","<<e.address.state;
	cout<<endl;
	
	
}

