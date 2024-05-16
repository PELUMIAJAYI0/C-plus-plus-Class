//program to input and output marks using arrays
#include<iostream>
using namespace std;

int main()
{
	int mark[6], i;
	cout<<"Input the marks--->\n";
	//input the marks
	for(i=0; i<6; ++i)
	{
		//cout<<"Input mark---> "<<i+1;
		cin>>mark[i];
	}
	//output the marks
	for(i=0; i<6; ++i){
		cout<<"mark["<<i<<"]="<<mark[i]<<endl;
	}
	return 0;
}
