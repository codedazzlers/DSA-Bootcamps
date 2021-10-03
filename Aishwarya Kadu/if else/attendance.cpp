
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
	cout<<"As the attendence is lower than 75% \nyou are not allowed to sit for examination";
	else
	cout<<"You are allowed to sit for the examination";
}