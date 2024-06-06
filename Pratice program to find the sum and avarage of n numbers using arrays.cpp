//program to find the sum and avarage of n numbers using arrays

#include<iostream>
using namespace std;

int main()
{
	int sum=0, average, mul, div, maximum, minimum;
	int n, marks[10], i;
	
	cout<<"Input the number of elements---> ";
	cin>>n;
	cout<<"The number n elements entered is--> "<<n<<endl;
	
	for(i=0; i<n; i++)
	{
		cout<<"Input the mark["<<i<<"]---> ";
		cin>>marks[i];
		
		sum+=marks[i];
		mul*=marks[i];
	}
	
	cout<<""<<endl;
	
	for(i=0; i<n; i++)
	{
		cout<<"The value for["<<i<<"]---> "<<marks[i]<<endl;
	}
	
	cout<<""<<endl;
	
	cout<<"The sum of the marks---> "<<sum<<endl;
	cout<<"The Multiplication of the marks are---> "<<mul;
	
	cout<<""<<endl;
	
	average = sum/n;
	cout<<"The average of the marks---> "<<average<<endl;
	
	maximum=marks[0];
	for(i=0; i<n; i++)
	{
		if(maximum<marks[i])
		{
			maximum=marks[i];
		}
	}
	cout<<"The maximum mark is--->"<<maximum<<endl;
	
	minimum=marks[0];
	for(i=0; i<n; i++)
	{
		if(minimum>marks[i])
		{
			minimum=marks[i];
		}
	}
	cout<<"The minimum mark is--->"<<minimum;
}
