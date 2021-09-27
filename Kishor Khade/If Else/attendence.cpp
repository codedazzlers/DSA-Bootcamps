/* A student will not be allowed to sit in exam if his/her attendence is less than 75%.
Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not.*/

#include<iostream>
using namespace std;

int main(){
	int classes_held, classes_attended, per;
	cout<<"No. of classes held : ";
	cin>>classes_held;
	cout<<"No. of classes attended : ";
	cin>>classes_attended;
	per=classes_attended*100/classes_held;
	cout<<"Total percentage of classes attended is "<<per<<"%"<<endl;
	if (per<75)
	cout<<"As tour attendence is lower than 75% \nyou are not allowed to sit in exam";
	else
	cout<<"You are allowed to sit in the exam.";
}
