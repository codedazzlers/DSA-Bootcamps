#include<iostream>
using namespace std;
int main(){
	int yr;
	cout<<"\nEnter the year : ";
	cin>>yr;
	if(yr%4==0){
		if(yr%100==0){
			if(yr%400==0)
			{
				cout<<yr<<" is a Centuary Year and a Leap Year";
			}
		}
		else{
			cout<<yr<<" is a Leap Year";
		}
	}
	else{
		cout<<yr<<" is not a Leap year";
	}
}
