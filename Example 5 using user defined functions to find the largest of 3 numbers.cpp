#include<iostream>
using namespace std;

int largest(int x, int y, int z);
int main()
{
	int num1, num2, num3, max;
	cout<<"Input first number--->";
	cin>>num1;
	cout<<"Input second number--->";
	cin>>num2;
	cout<<"Input third number--->";
	cin>>num3;
	//function call
	max = largest(num1, num2, num3);
	cout<<"The largest number is--->"<<max;
}

int largest(int x, int y, int z){
	if(x>y && x>z)
	return x;
	else if(y>x && y>z)
	return y;
	else 
	return z;
}
