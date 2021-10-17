//It print the PRODUCT of Even number in n natural number
#include<iostream>
using namespace std;
int main(){
	int num;
	int mul=1;
	//Enter the number
	cout << "Enter the number"<<endl;
	cin >>num;
	for(int i=1;i<=num;i++){
		if(i%2==0)
		mul=mul*i;
	}
	cout << "Product of the Even numbers:::" <<mul<<endl;
}
