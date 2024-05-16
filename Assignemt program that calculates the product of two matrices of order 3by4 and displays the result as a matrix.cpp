//program that calculates the product of two matrices of order 3*4 and displays the result as a matrix. (Use functions)


#include<iostream>
using namespace std;

int main()
{
	int matrix_one[3][4], matrix_two[3][4], i, j, product[i][j];
	
	//input values of the first matrix
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			cout<<"Input the values for marix one["<<i<<"]["<<j<<"]--->";
			cin>>matrix_one[i][j];
		}
	}
	
	//displays the values for the first matrix
	for(i=0; i<3; i++)
	{
		cout<<""<<endl;
		for(j=0; j<4; j++)
		{
			cout<<matrix_one[i][j]<<"\t";
		}
	}
	
	cout<<""<<endl;
	
	//Input Values for the second matrix
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			cout<<"Input the values for matrix two["<<i<<"]["<<j<<"]--->";
			cin>>matrix_two[i][j];
		}
	}
	
	//displays the values for the second matrix
	for(i=0; i<3; i++)
	{
		cout<<""<<endl;
		for(j=0; j<4; j++)
		{
			cout<<matrix_two[i][j]<<"\t";
		}
	}
	
	cout<<""<<endl;
	
	
	//calculate the product of the scores
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			product[i][j]=matrix_one[i][j]*matrix_two[i][j];
		}
	}
		
	for(i=0; i<3; i++)
	{
		cout<<""<<endl;
		for(j=0; j<4; j++)
		{
			cout<<"Product["<<i<<"]["<<j<<"]--->"<<product[i][j]<<endl;
		}
	}
}
