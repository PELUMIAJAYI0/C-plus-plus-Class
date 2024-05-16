//performing simple arithemetic operation

#include <iostream>
using namespace std;

int main()
{
	int num1,num2,addition,subtraction;
	//char a;
	
	cout<<"Enter first number--->";
	cin>>num1;
	//cout<<"The number entered is--->"<<num1;
	
	cout<<"Enter second number--->";
	cin>>num2;
	//cout<<"The number entered is--->"<<num2;
	
	addition=num1+num2;
	cout<<"The addition of the two numbers is--->"<<addition<<"\n";
	//cout<<"num1+num2="<<num1+num2;another method
	
	subtraction=num1-num2;
	cout<<"The subtraction of the two numbers is--->"<<subtraction;
	//cout<<"num1-num2="<<num1-num2;another method
	return 0;
}


