//class work to create a nested structure 
//first structure---> Customer Personal Details: Name, Gender, AccountNumber, DOB;
//Second structure---> Customer account details: Type of account, opening balance, closing balance

#include<iostream>
#include<cstdlib>
using namespace std;

struct Customer_Personal_Details{
	char name[30];
	string gender;
	int account_number;
	int DOB;
	
	struct Customer_account_details{
		string type_of_account;
		int opening_balance;
		int closing_balance;
	}cad;
};

int main()
{
	Customer_Personal_Details cpd;
	
	cout<<"Input the name---> ";
	cin.getline(cpd.name,30);
	
	cout<<"Input the gender---> ";
	cin>>cpd.gender;
	
	cout<<"Input the account number---> ";
	cin>>cpd.account_number;
	
	cout<<"Input the Date of Birth---> ";
	cin>>cpd.DOB;
	
	cout<<"Input the Type of acccount---> ";
	cin>>cpd.cad.type_of_account;
	
	cout<<"Input the Opening Balance---> ";
	cin>>cpd.cad.opening_balance;
	
	cout<<"Input the Closing Balance---> ";
	cin>>cpd.cad.closing_balance;
	
	system("cls");
	cout<<"...Bank Customer Information..."<<endl;
	
	cout<<"Name---> "<<cpd.name<<endl;
	cout<<"Gender---> "<<cpd.gender<<endl;
	cout<<"Account Number---> "<<cpd.account_number<<endl;
	cout<<"Date of Birth---> "<<cpd.DOB<<endl;
	cout<<"Type of Account---> "<<cpd.cad.type_of_account<<endl;
	cout<<"Opening Balance---> "<<cpd.cad.opening_balance<<endl;
	cout<<"Closing Balance---> "<<cpd.cad.closing_balance<<endl;
	
}


