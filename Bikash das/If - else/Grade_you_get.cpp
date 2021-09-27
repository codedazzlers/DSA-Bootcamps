#include<iostream>
using namespace std;
int main(){
	int mark;
	//Enter the mark you get out of 100 
	cout << "Enter the mark you get out of 100 " <<endl;
	cin >> mark;
	if(mark<25)
	cout << "Grade is 'F'" << endl;
	else if(mark>=25 && mark<45)
	cout << "Grade is 'E'" << endl;
	else if(mark>=45 && mark<50)
	cout << "Grade is 'D'" << endl;
	else if(mark>=55 && mark<60)
	cout << "Grade is 'C'" << endl;
	else if(mark>=60 && mark<80)
	cout << "Grade is 'B'" << endl;
	else if(mark>100)
	cout << "No grade is their" << endl;
	else if(mark>=80)
	cout << "Grade is 'A'" << endl;
}
