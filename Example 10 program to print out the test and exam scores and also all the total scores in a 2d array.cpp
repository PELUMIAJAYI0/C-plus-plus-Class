//program to print out the test and exam scores and also all the total scores

#include<iostream>
using namespace std;

int main()
{
	int test_scores[3][4], exam_scores[3][4], i, j, total[3][4];
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			cout<<"Input the scores for the test["<<i<<"]["<<j<<"]--->";
			cin>>test_scores[i][j];
		}
	}
	
	for(i=0; i<3; i++)
	{
		cout<<""<<endl;
		for(j=0; j<4; j++)
		{
			cout<<test_scores[i][j]<<"\t";
		}
	}
	
	cout<<""<<endl;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			cout<<"Input the scores for the exam["<<i<<"]["<<j<<"]--->";
			cin>>exam_scores[i][j];
		}
	}
	
	for(i=0; i<3; i++)
	{
		cout<<""<<endl;
		for(j=0; j<4; j++)
		{
			cout<<exam_scores[i][j]<<"\t";
		}
	}
	
	cout<<""<<endl;
	
	//calculate the total scores
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			total[i][j]=test_scores[i][j]+exam_scores[i][j];
		}
	}
		
	for(i=0; i<3; i++)
	{
		cout<<""<<endl;
		for(j=0; j<4; j++)
		{
			cout<<"total["<<i<<"]["<<j<<"]--->"<<total[i][j]<<endl;
		}
	}
	
}
