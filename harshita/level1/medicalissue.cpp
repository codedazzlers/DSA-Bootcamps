
#include<iostream>
using namespace std;


int main()
{
	int numclass, attend, total;
	char issue,Y,N;
	cout << "Number of Classes: ";
	cin >> numclass;
	cout << "Number of Classes attended: ";	
	cin >> attend;
	total= (attend / numclass)* 100;
	cout << "Medical Issue(PICK Y/N): ";
	cin >> issue;
	if(total< 75){
	    cout << "Student is not allowed to sit in Exam! ";
	}
	else if(issue==Y){
	    cout << "student is allowed to sit in exam";
	}
	else{
	    cout << "student is allowed to sit in exam";
	}
	    
	
	
	
	
}
