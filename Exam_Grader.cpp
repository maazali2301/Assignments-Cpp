#include <iostream>
using namespace std;
int main()
{
	char correct_answers[20]={'A', 'C', 'A', 'A','D', 'B','C', 'A','C','B','A','D','C','A','D', 'C','B','B','D','A'};
	char student_answers[20];
	int num_ques_incorrect[20]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	cout<<"Islamabad Police - Driving License Written Exam "<<endl<<endl;
	int correct=0;
	int incorrect=0;
	
	for (int i=0; i<20; i++)  //take answers from test-taker
	{
		cout<<"Enter your answer for Question "<<i+1<<" :";
		cin>>student_answers[i];
	}
	
	for (int i=0;i<20;i++)
	{
		if (student_answers[i]==correct_answers[i])
		{
			correct++;
		}
		else
		{
			incorrect++;
			num_ques_incorrect[i]=i;
		}
	}

	if (correct>=15)
	{
		cout<<"Congratulations! You have passed"<<endl<<endl;
	}
	else
	{
		cout<<"Failed! Please try again next time"<<endl<<endl;
	}
	
	cout<<"Correct Answers: "<<correct<<endl;
	cout<<"Incorrect Answers: "<<incorrect<<endl;
	cout<<"Wrong questions list....";
	for (int i=0; i<20; i++)
	{
		if (num_ques_incorrect[i]>0)
		cout<<num_ques_incorrect[i]<<" ";
	}
	
}
