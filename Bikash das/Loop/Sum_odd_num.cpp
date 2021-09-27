//It print the sum of odd number in n natural number
#include<iostream>
using namespace std;
int main(){
	int num;
	int sum=0;
	//Enter the number
	cout << "Enter the number"<<endl;
	cin >>num;
	for(int i=0;i<num;i++){
		if(i%2!=0)
		sum=sum+i;
	}
	cout << "sum of the odd numbers:::" <<sum<<endl;
}
