//program to print out values in a 2D array

#include<iostream>
using namespace std;

int main()
{
	int values[4][3], i, j;
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<3; j++)
		{
			cout<<"Input the values in ["<<i<<"] and ["<<j<<"]--->";
			cin>>values[i][j];
			cout<<""<<endl;
		}
	}
	
	cout<<""<<endl;
	
	for(i=0; i<4; i++)
	{
		cout<<""<<endl;
		for(j=0; j<3; j++)
		{
			cout<<values[i][j]<<"\t";	
		}
	}
	
}

