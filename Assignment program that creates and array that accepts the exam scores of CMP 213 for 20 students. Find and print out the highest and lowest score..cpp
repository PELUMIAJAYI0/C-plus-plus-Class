//program that creates and array that accepts the exam scores of CMP 213 for 20 students. Find and print out the highest and lowest score.

#include<iostream>
using namespace std;

int main()
{
	int scores[20], i, highest, lowest;
	
	//input the scores for CMP213
	for(i=0; i<20; ++i)
	{
		cout<<"Input the score for Student "<<i+1<<" ---> ";
		cin>>scores[i];
	}
	
	cout<<""<<endl;
	
	//displays the scores
	for(i=0; i<20; ++i)
	{
		cout<<"The score for Student "<<i+1<<" ---> "<<scores[i]<<endl;
	}
	
	cout<<""<<endl;
	//to find the highest score
	highest=scores[0];
	for(i=0; i<20; ++i)
	{
		if(highest<scores[i])
		{
			highest=scores[i];
		}
	}
	cout<<"The highest score is--->"<<highest<<endl;
	
	//to find the lowest score
	lowest=scores[0];
	for(i=0; i<20; ++i)
	{
		if(lowest>scores[i])
		{
			lowest=scores[i];
		}
	}
	cout<<"The lowest score is--->"<<lowest<<endl;
}
