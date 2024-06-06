//program to print and display array elments

#include<iostream>
using namespace std;

int main()
{
	int mark[7] = {12,23,45,67,78,89,78};
	
	int i;
	
	for(i=0; i<7; i++){
		cout<<mark[i]<<""<<endl;
	}
	
	cout<<""<<endl;
	
	mark[0] = 90;
	mark[1] = 90;
	mark[2] = 90;
	mark[3] = 90;
	mark[4] = 90;
	mark[5] = 90;
	mark[6] = 90;
	
	for(i=0; i<7; i++)
	{
		cout<<mark[i]<<""<<endl;
	}
	
}
