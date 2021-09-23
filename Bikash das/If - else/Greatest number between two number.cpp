#include<iostream>
using namespace std;

int main(){
	int num1,num2;
	//Enter value of num1
	cout << "Enter value of num1::" <<endl;
	cin>>num1;
	//Enter value of num2
	cout<<"Enter value of num2::"<<endl;
	cin>>num2;
	
	//Greatest number checking
	if(num1>num2){
		cout<< num1 <<"is greater than"<<num2<<endl;
	}
	if(num1<num2){
		cout<< num2 <<"is grater than"<< num1<<endl;
	}
	else{
		cout<<"Two numbers are equal"<<endl;
	}
}
