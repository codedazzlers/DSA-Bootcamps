//A school has following rules for grading system:
//a. Below 25 - F
//b. 25 to 45 - E
//c. 45 to 50 - D
//d. 50 to 60 - C
//e. 60 to 80 - B
//f. Above 80 - A
//Ask user to enter marks and print the corresponding grade.

#include<iostream>
using namespace std;
int main(){
	int mark;
	cout<<"Enter your marks : ";
	cin>>mark;
	if ((mark>80)&&(mark<=100))
		cout<<"Grade A";
	else if(mark>60)
		cout<<"Grade B";
	else if(mark>50)
		cout<<"Grade C";
	else if(mark>45)
		cout<<"Grade D";
	else if(mark>25)
		cout<<"Grade E";
	else if(mark<=25)
		cout<<"Grade F";
	else
		cout<<"Given marks are wrong.";
}
