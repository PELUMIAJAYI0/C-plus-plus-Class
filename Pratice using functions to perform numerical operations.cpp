#include<iostream>

using namespace std;

int addition(int a, int b);
int subtraction(int a, int b);
int mutiplication(int a, int b);
int division(int a, int b);

int main()
{
	int num1, num2, addition, subtraction, multiplication, division;
	int sum, sub, mul, div;
	
	cout<<"Input the first number--->";
	cin>>num1;
	
	cout<<"Input the second number--->";
	cin>>num2;
	sum=addition(int a, int b);
	sub=subtraction(int a, int b);
	mul=multiplication(int a, int b);
	div=div(int a, int b);
	cout<<"The addition of"<<num1<<"and"<<num2<<"is--->"<<sum<<endl;
	cout<<"The sutraction of"<<num1<<"and"<<num2<<"is--->"<<sub<<endl;
	cout<<"The multiplication of"<<num1<<"and"<<num2<<"is--->"<<mul<<endl;
	cout<<"The division of"<<num1<<"and"<<num2<<"is--->"<<div<<endl;
}
int addition(int a, int b)
{
	int result;
	result = a+b;
	return result;
}
int subtraction(int a, int b)
{
	int result;
	result = a-b;
	return result;
}
int multiplication(int a, int b)
{
	int result;
	result = a*b;
	return result;
}
int division(int a, int b)
{
	int result;
	result = a/b;
	return result;
}
