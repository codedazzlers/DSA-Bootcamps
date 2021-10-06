//It print the PRODUCT of odd number in n natural number
#include<iostream>
using namespace std;
int main(){
	int num;
	int mul=1;
	//Enter the number
	cout << "Enter the number"<<endl;
	cin >>num;
	while(num>0){
        int rem=num%10;
		if(rem%2!=0)
		  mul=mul*rem;
        num/=10;
	}
	cout << "Product of the odd digits:::" <<mul<<endl;
}