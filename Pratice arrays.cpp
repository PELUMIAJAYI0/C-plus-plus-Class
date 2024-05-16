//arrays learning in c++

#include <iostream>
#include <string>
using namespace std;

int main(){
	int arr[5]= {1, 2, 3, 4, 5};
	arr[3]= 10;
	cout<<arr[0]<<endl;
	cout<<arr[1]<<endl;
	cout<<arr[2]<<endl;
	cout<<arr[3]<<endl;
	cout<<arr[4]<<endl<<endl;
	
	
	cout<<sizeof(arr)<<endl;;
	cout<<sizeof(arr)/sizeof(arr[0])<<endl;
	cout<<sizeof(arr)/sizeof(arr[1])<<endl;
	cout<<sizeof(arr)/sizeof(arr[2])<<endl;
	cout<<sizeof(arr)/sizeof(arr[3])<<endl;
	cout<<sizeof(arr)/sizeof(arr[4])<<endl;
}
