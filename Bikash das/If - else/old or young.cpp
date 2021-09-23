#include<iostream>
using namespace std;
int age0(int age1,int age2,int age3){
	if(age1>age2 && age1>age3){
		cout << "1ST person is older" <<endl;
		if(age2>age3){
			cout << "3RD person is younger" <<endl;
		}
		else if(age3>age2){
			cout << "2ND person is younger" <<endl;
		}
		else{
			cout << "both 3RD and 2ND person are younger" <<endl;
		}
	}
	else if(age2>age1 && age2>age3){
		cout << "2ND person is older" <<endl;
		if(age1>age3){
			cout << "3RD person is younger" <<endl;
		}
		else if(age3>age1){
			cout << "1ST person is younger" <<endl;
		}
		else{
			cout << "both 3RD and 1st person are younger" <<endl;
		}
	}
	else if(age3>age1 && age3>age2){
		cout << "3RD person is older" <<endl;
		if(age2>age1){
			cout << "1ST person is younger" <<endl;
		}
		else if(age1>age2){
			cout << "2ND person is younger" <<endl;
		}
		else{
			cout << "both 1ST and 2ND person are younger" <<endl;
		}
	}
	else{
		cout <<"Both three are same age"<<endl;
	}
}

int main(){
	int Aage,Bage,Cage;
	cout << "Enter 1st person age"<<endl;
	cin >> Aage;
	cout << "Enter 2nd person age"<<endl;
	cin >> Bage;
	cout << "Enter 3rd person age"<<endl;
	cin >> Cage;
	age0(Aage,Bage,Cage);
}
