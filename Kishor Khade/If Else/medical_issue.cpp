//Modify the above question to allow student to sit if he/she has medical cause.
//Ask user if he/she has medical cause or not ( 'Y' or 'N' ) and print accordingly.

#include<iostream>
using namespace std;

int main(){
	char med_issue;
	cout<<"Do you have medical issue? ('Y' or 'N')"<<endl;
	cin>>med_issue;
	if (med_issue=='Y'||med_issue=='y')
	cout<<"you are not allowed to sit in exam";
	else if (med_issue=='N'||med_issue=='n')
	cout<<"You are allowed to sit in the exam.";
	return 0;
}
