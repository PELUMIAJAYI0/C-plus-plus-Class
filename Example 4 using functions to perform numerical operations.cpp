#include<iostream>
using namespace std;

int add(int a, int b);//function prototype
int sub(int a, int b);
int div(int a, int b);
int mul(int a, int b);
int main()
{
	int num1, num2, sum;
	cout<<"Input first number--->";
	cin>>num1;
	cout<<"Input second number--->";
	cin>>num2;
	sum=add(num1, num2);//function call
	cout<<"The sum of "<<num1<<" and "<<num2<<" is "<<sum<<"\n";
	cout<<"The difference of "<<num1<<" and "<<num2<<" is "<<sub(num1, num2)<<"\n";
	cout<<"The division of "<<num1<<" and "<<num2<<" is "<<div(num1, num2)<<"\n";
	cout<<"The multiplication of "<<num1<<" and "<<num2<<" is "<<mul(num1, num2);
}
//function definition
int add(int a, int b){
	int result;
	result = a+b;
	return result;
}
int sub(int a, int b){
	int result;
	result = a-b;
	return result;
}
int div(int a, int b){
	int result;
	result = a/b;
	return result;
}
int mul(int a, int b){
	int result;
	result = a*b;
	return result;
}
