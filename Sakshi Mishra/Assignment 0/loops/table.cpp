#include<iostream>

using namespace std;

int main(){
	int num;
	cout <<"Enter any number:-"<<endl;
	cin >>num;
	int m=0;
	for(int i=0;i<=10;i++){
		m=num*i;
		cout <<num<<" * "<<i<<" = "<<m<<endl;
	}
}
