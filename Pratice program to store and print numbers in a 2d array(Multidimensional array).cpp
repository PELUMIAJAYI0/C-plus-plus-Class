//program to store and print numbers in a 2d array

#include<iostream>
using namespace std;

int main()
{
	int numbers[4][4], i, j, total=0, average, multiplication=1;
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			cout<<"Input the numbers in the element["<<i<<"]["<<j<<"]--->";
			cin>>numbers[i][j];
			cout<<""<<endl;
			total+=numbers[i][j];
			//multiplication*=numbers[i][j];
		}
	}
	
	cout<<"The total of the numbers in the array is--->"<<total<<endl;
	//cout<<"The Multiplication of the numbers in the array is--->"<<multiplication<<endl;
	
	average=total/16;
	cout<<"The average of the numbers in the array is--->"<<average<<endl;
	
	for(i=0; i<4; i++)
	{
		cout<<""<<endl;
		for(j=0; j<4; j++)
		{
			cout<<numbers[i][j]<<"\t";
		}
	}
}
