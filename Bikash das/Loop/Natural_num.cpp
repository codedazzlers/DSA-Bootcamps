#include<iostream>
using namespace std;
int main(){
	int num;
	//Enter a number
	cout << "Enter a number::" <<endl;
	cin >> num;
	cout << "The numbers are:::::::::::::" << endl;
	int i=0;
	while(i<=num){
		cout << i <<endl;
		i=i+1;
	}
	return 0;
}
