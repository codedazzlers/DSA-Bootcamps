#include<iostream>
using namespace std;


int main()
{
	int numclass, attend, total;
	cout << "Number of Classes: ";
	cin >> numclass;
	cout << "Number of Classes attended: ";	
	cin >> attend;
	total= (attend / numclass)* 100;
	if(total< 75){
	    cout << "Student is not allowed to sit in Exam! ";
	}
	else{
	    cout << "student is allowed to sit in exam";
	}
	
	return 0;
}