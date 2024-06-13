//program to print out information for 50 CMP 221 students

#include<iostream>
using namespace std;

int main()
{
	int i;
	int test_score[i], exam_score[i], total_score[i];
	
	for(i=0; i<50; i++)
	{
		cout<<"Input the test score for student"<<i+1<<"--->"<<endl;
		cin>>test_score[i];
	}
	
	for(i=0; i<50; i++)
	{
		cout<<"Input the exam score for student"<<i+1<<"--->"<<endl;
		cin>>exam_score[i];
	}
	
	for(i=0; i<50; i++)
	{
		total_score[i]=test_score[i]+exam_score[i];
	}
	
	for(i=0; i<50; i++)
	{
		cout<<"The test score for["<<i<<"]---> "<<test_score[i]<<endl;
	}
	
	for(i=0; i<50; i++)
	{
		cout<<"The exam score for["<<i<<"]---> "<<exam_score[i]<<endl;
	}
	
	for(i=0; i<50; i++)
	{
		cout<<"The total score for["<<i<<"]---> "<<total_score[i]<<endl;
	}
}
