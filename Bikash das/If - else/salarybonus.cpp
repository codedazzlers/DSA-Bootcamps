#include<iostream>
using namespace std;

int main(){
    int salary,year;
    
    //Enter your total salary per annum
    cout << "Enter your total salary per annum:::" <<endl;
    cin >> salary;
    
    //Enter your year of services till now in this company
    cout << "Enter your year of service till now in this company::" <<endl;
    cin >> year;
    
    if(year>5){
    	float bonus=(5*salary)/100;
    	float totalsalary=salary+bonus;
    	cout << "As you are working since  " << year << "  year,so you got 5% bonus with your salary,then your total salary will be  " <<  totalsalary <<endl;
	}
	else{
		cout << "As you are working since leaa than  " << year << "  year,so you donot got any bonus,then your total salary will be  " << salary <<endl;
	}
    return 0;
}
