//program to pass array into a function
//program to print the individual elements in an array using function

#include<iostream>
using namespace std;

int display_age(int age1, int age3)//Function definition
{
	cout<<"age_array[1]-->"<<age1<<endl;
	cout<<""<<endl;
	cout<<"age_array[1]-->"<<age3;
}
int main()
{
	int age_array[]={10, 20, 23, 15};
	display_age(age_array[1], age_array[3]);//Function call
}


