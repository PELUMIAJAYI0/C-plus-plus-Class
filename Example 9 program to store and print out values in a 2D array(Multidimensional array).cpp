//program to store and print out values in a 2D array

#include<iostream>
using namespace std;

int main(){
	int values[3][2], i, j;
	//store values in the array
	
	for(i=0;i<3;i++)
	
	{
		for(j=0; j<2; j++)
		{
			cout<<"Input the element in values["<<i<<"]["<<j<<"]=";
			cin>>values[i][j];
			cout<<""<<endl;
			
		}
	}
	//ptint out the values inputed
	for(i=0; i<3; i++)
	{
		cout<<"\n";
		for(j=0; j<2; j++)
		{
			cout<<values[i][j]<<"\t";
			//cout<<"values["<<i<<"]["<<j<<"]="<<values[i][j]<<endl;
			//cout<<""<<endl;
		}
	}
}



