
#include<iostream>
using namespace std;
int i, j, total=0;

int input_mark(int marks[2][3]){
	for(i=0; i<2; i++) {
		for(j=0; j<3; j++) {
		cout<<"Input score "<<"["<<i<<"]"<<"["<<j<<"]"<<": ";
		cin>>marks[i][j];
	}
	}
}

int display_marks(int marks[2][3]){
	cout<<endl;
	for(i=0; i<2; i++) {
		for(j=0; j<3; j++) {
		cout<<"score "<<"["<<i<<"]"<<"["<<j<<"]"<<" = "<<marks[i][j]<<endl;
	}
		
	}
	
}

int calculate(int marks[2][3]) {
	for (i=0; i<2; i++) {
		for (j=0; j<3; j++) {
			total+=marks[i][j];
		}
	}
	cout<<endl;
	cout<<"Total is "<<total<<endl;
	cout<<"Average is "<<total/5;
}

int main(){
	int mark[2][3];
	input_mark(mark);
	display_marks(mark);
	calculate(mark);
	
	return 0;
system("pause");	
}




