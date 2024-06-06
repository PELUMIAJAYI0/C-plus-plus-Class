//changing values in an array

#include<iostream>
using namespace std;

int main()
{
	const mark[5] = {19, 10, 8, 17, 9};
	// make the value of the third element to -1
	//mark[2] = -1;
	// make the value of the fifth element to 0
	//mark[4] = 0;
	cout<<mark[0]<<endl;
	cout<<mark[1]<<endl;
	cout<<mark[2]<<endl;
	cout<<mark[3]<<endl;
	cout<<mark[4]<<endl;
	
	mark[2]=45;
	cout<<mark[2]<<endl;
	
	
	return 0;
}
 
