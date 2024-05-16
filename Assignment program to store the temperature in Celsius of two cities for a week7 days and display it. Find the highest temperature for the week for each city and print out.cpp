//program to store the temperature (in Celsius) of two(2) cities for a week(7 days) and display it. Find the highest temperature for the week for each city and print out.

#include<iostream>
using namespace std;

int main()
{
	int temperature[7], i, highest;
	
	//For city 1
	
	//input the temperature
	for(i=0; i<7; ++i)
	{
		cout<<"Input the temperature(in Celsius) for day "<<i+1<<" in City 1---> ";
		cin>>temperature[i];
	}
	
	cout<<""<<endl;
	
	//displays the temperature
	for(i=0; i<7; ++i)
	{
		cout<<"The temperature(in Celsius) for day "<<i+1<<" in City 1---> "<<temperature[i]<<endl;
	}
	
	cout<<""<<endl;
	
	//finds the highest temperature
	highest=temperature[0];
	for(i=0; i<7; ++i)
	{
		if(highest<temperature[i])
		{
			highest=temperature[i];
		}
	}
	cout<<"The highest temperature (in Celsius) in City 2 is--->"<<highest<<endl;
	
	
	cout<<""<<endl;
	cout<<""<<endl;
	//For city 2
	
	//input the temperature
	for(i=0; i<7; ++i)
	{
		cout<<"Input the temperature(in Celsius) for day "<<i+1<<" in City 2---> ";
		cin>>temperature[i];
	}
	
	cout<<""<<endl;
	
	for(i=0; i<7; ++i)
	{
		cout<<"The temperature(in Celsius) for day "<<i+1<<" in City 2---> "<<temperature[i]<<endl;
	}
	
	cout<<""<<endl;
	
	highest=temperature[0];
	for(i=0; i<7; ++i)
	{
		if(highest<temperature[i])
		{
			highest=temperature[i];
		}
	}
	cout<<"The highest temperature (in Celsius) in City 2 is--->"<<highest<<endl;
}
