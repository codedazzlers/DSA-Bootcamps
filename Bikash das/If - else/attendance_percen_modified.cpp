#include<iostream>
using namespace std;
int main(){
	int T_c_Held,t_c_attended;
	//Enter the number of total class held
	cout << "Enter the number of total class held" <<endl;
	cin >> T_c_Held;
	//Enter the number of class you attend
	cout << "Enter the number of class you attend" <<endl;
	cin >> t_c_attended;
	float att_percen=(t_c_attended*100)/T_c_Held;
	cout << "Percentage of attendance is " << att_percen <<endl;
	//Ask for medical case?
	cout << "Are you having any medical case? /nif yes then enter 'Y' else enter 'N'" <<endl;
	char ans;
	cin >>ans;
	if(att_percen<75.00){
		if('ans is Y')
		cout << "You can sit in Examination hall" <<endl;
		else if('ans is N')
		cout << "You cannot sit in Examination hall" <<endl;
		else
		cout << "You entered wrong letter" <<endl;
	}
	else
	cout << "You can sit in Examination hall" <<endl;
}
