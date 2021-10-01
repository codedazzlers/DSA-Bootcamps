// Write a program to reverse order of naturanl number from n to 1


#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the value of n : ";
	cin>>n;
	for (int i=n;i>0;i--){
		cout<<i<<'\t';
	}
	return 0;
}

