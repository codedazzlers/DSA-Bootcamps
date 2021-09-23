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
	if(att_percen<75.00)
	cout << "You will not sit in Examination hall" <<endl;
	else
	cout << "You can sit in Examination hall" <<endl;
}
