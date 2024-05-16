//program to pass an entire array into a function

#include<iostream>
using namespace std;
int i;
int total, average;
 

int input_mark(int mark[])//function definition to input the studets marks
{
	for(i=0; i<5; i++)
	{
		cin>>mark[i];
	}
}

int display_mark(int mark[])//function definition to display the studets marks
{

	for(i=0; i<5; i++)
	{
		cout<<mark[i];
		total+=mark[i];
		average = total/6;
		
	}
	cout<<total;
	cout<<average;
}



int main()
{
	int mark[5];
	input_mark(mark);
	display_mark(mark);
	
	
}
