#include<iostream>
using namespace std;
int main(){
	int TCH,TCA;
	//Enter the number of total class held
	cout << "Enter the number of total class held" <<endl;
	cin >> TCH;
	//Enter the number of class you attend
	cout << "Enter the number of class you attend" <<endl;
	cin >> TCA;
	float att_percen=(TCA*100)/TCH;
	cout << "Percentage of attendance is " << att_percen <<endl;
	//Ask for medical case?
	cout << "Are you having any medical case? /nif yes then enter 'Y' else enter 'N'" <<endl;
	char ans;
	cin >>ans;
	if(att_percen<75.00){
		if('Y')
		cout << "You can sit in Examination hall" <<endl;
		else if('N')
		cout << "You cannot sit in Examination hall" <<endl;
		else
		cout << "You entered wrong letter" <<endl;
	}
	else
	cout << "You can sit in Examination hall" <<endl;
}