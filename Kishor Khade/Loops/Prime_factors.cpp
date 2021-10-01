// Program to find prime factors of a given number

#include<iostream>
using namespace std;

int main(){
	int num, p_factor;
	cout<<"Enter a number to find its prime factor : ";
	cin>>num;
	cout<<"Prime factors of "<<num<<" are : "<<endl;
	for(int i=2; i<=num/2; i++){
		if(num%i==0){
			p_factor=1;
			for(int j=2; j<=i/2; j++){
				if (i%j==0){
				p_factor=0;
				break;
				}
			}
			if(p_factor==1){
				cout<<i<<", ";
			}
		}
	}
	return 0;
}

