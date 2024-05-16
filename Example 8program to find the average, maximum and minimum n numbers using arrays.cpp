//program to find the average, maximum and minimum n numbers using arrays
#include<iostream>
using namespace std;

int main()
{
	int mark[6], i, total=0, max, min;
	float average;
	cout<<"Enter the marks: "<<endl;
	//input the marks
	for(i=0; i<6; ++i)
	{
		cout<<"Enter marks "<<i+1<<" ";
		cin>>mark[i];
		total+= mark[i];//total = total+mark[i]
	}
	
	average = total/6;
	cout<<"The total marks inputted is "<<total<<"\n";
	cout<<"The average is "<<average;
	
	max=mark[0];
	for(i=0; i<6; ++i){
		if(max<mark[i])
		{
			max=mark[i];
		}
	}
	cout<<"The maximum number is--->"<<max<<endl;
	
	min=mark[0];
	for(i=0; i<6; ++i){
		if(min>mark[i])
		{
			min=mark[i];
		}
	}
	cout<<"The minimum number is--->"<<min;
	
	return 0;

}

