//It print the odd number in n natural number
#include<iostream>
using namespace std;
int main(){
	int num;
	//Enter the number
	cout << "Enter the number"<<endl;
	cin >>num;
	cout << "Odd numbers are:::"<<endl;
	for(int i=0;i<num;i++){
		if(i%2!=0){
			cout << i <<endl;
		}
	}
}
