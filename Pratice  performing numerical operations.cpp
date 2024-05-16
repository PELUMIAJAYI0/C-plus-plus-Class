//performing numerical operations

#include<iostream>
using namespace std;

int main()
{
	int num1, num2, addition, subtraction, multiplication, division, modulus;
	
	cout<<"Input the first number--->";
	cin>>num1;
	cout<<"The number you entered is--->"<<num1<<"\n";
	
	cout<<"Input the second number--->";
	cin>>num2;
	cout<<"The number you entered is--->"<<num2<<"\n";
	
	addition = num1+num2;
	cout<<"The addition of both numbers is--->"<<addition<<"\n";
	
	subtraction = num1-num2;
	cout<<"The subtraction of both numbers is--->"<<subtraction<<"\n";
	
	multiplication = num1*num2;
	cout<<"The multiplication of both numbers is--->"<<multiplication<<"\n";
	
	division = num1/num2;
	cout<<"The division of both numbers is--->"<<division<<"\n";
	
	modulus = num1%num2;
	cout<<"The modulus of both numbers is--->"<<modulus<<"\n";
	
	return 0;
}
