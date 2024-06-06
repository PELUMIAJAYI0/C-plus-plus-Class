//program to store and output elements in an array

#include<iostream>
using namespace std;

int main()
{
	int scores[7];
	int i;
	
	
	for(i=0; i<7; i++)
	{
		cout<<"Input the score["<<i<<"]---> ";
		cin>>scores[i];
	}
	
	cout<<""<<endl;
	
	for(i=0; i<7; i++)
	{
		cout<<"Score["<<i<<"]---> "<<scores[i]<<endl;
	}
}
