//LEAP YEAR OR NOT	
#include<iostream>
using namespace std;
int main(){
	int year;
	//Enter a year
	cout << "Enter a year" <<endl;
	cin >> year;
	if(year%4==0){
		if(year%100==0){
			if(year%400==0)
			cout << "It is a leap year" <<endl;
			else
			cout <<"It is not a leap year"<<endl;
		}
		else
		cout <<"It is a leap year"<<endl;
	}
	else
	cout <<"It is not a leap year"<<endl;
}
