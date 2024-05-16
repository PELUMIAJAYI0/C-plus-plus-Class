//Program to print everything in a arrray

#include<iostream>
using namespace std;

int display_age(int age[])//Function definition
{
	int i;
	for(i=0; i<4; i++)
	{
		cout<<"age_array["<<i<<"]="<<age[i]<<endl;
		cout<<""<<endl;
	}
}
int main()
{
	int age_array[]={10, 20, 23, 15}, i;
	display_age(age_array);//Function call
}


