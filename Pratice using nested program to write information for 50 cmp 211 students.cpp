//using nested program to write information for 50 cmp 211 students

#include<iostream>
using namespace std;

struct scr{
	int ca_score;
	int exam_score;
	int total_score;
};

struct student_information{
	string full_name;
	string matriculation_number;
	string programme;
	scr score;
};

int main()
{
	int i;
	struct student_information stud[50];
	
	for(i=0; i<50; i++)
	{
		cout<<"Input the Student name--->";
		cin>>stud[i].full_name;
		
		cout<<"Tnput the MAtriculation number--->";
		cin>>stud[i].matriculation_number;
		
		cout<<"Input the Programme--->";
		cin>>stud[i].programme;
		
		cout<<"Input the CA Score---> ";
		cin>>stud[i].score.ca_score;
		
		cout<<"Input the Exam Score---> ";
		cin>>stud[i].score.exam_score;
		
	}
	
	for(i=0; i<50; i++)
	{
		cout<<"Student name---> "<<stud[i].full_name<<endl;
		cout<<"Matriculation NUmber---> "<<stud[i].matriculation_number<<endl;
		cout<<"Programme---> "<<stud[i].programme<<endl;
		cout<<"Input CA Scores---> "<<stud[i].score.ca_score<<endl;
		cout<<"Input the Exam Score---> "<<stud[i].score.exam_score<<endl;
		cout<<"The Total Score is--->"<<stud[i].score.ca_score+stud[i].score.exam_score<<stud[i].score.total_score<<endl;
	}
}

