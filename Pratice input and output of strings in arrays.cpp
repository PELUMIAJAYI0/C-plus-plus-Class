#include <iostream>
#include <string>
using namespace std;

int main()
{
	int numbers[5], i, average, total=0, max, min;
	
	cout<<"Input the numbers"<<endl;
	
	for(i=0; i<5; ++i)
	{
		cin>>numbers[i];
	}
	for(i=0; i<5; ++i)
	{
		cout<<"numbers["<<i<<"]="<<numbers[i]<<endl;
		total= total+numbers[i];
		cout<<""<<endl;
	}
	
	average = total/5;
	cout<<"The total marks-->"<<total<<endl;
	cout<<"The average marks-->"<<average<<endl;
	
	max=numbers[0];
	for(i=0; i<5; ++i){
		if(max<numbers[i])
		{
			max=numbers[i];
		}
	}
	cout<<"The maximum number is--->"<<max<<endl;
	
	min=numbers[0];
	for(i=0; i<5; ++i){
		if(min>numbers[i])
		{
			min=numbers[i];
		}
	}
	cout<<"The minimum number is--->"<<min;
}
