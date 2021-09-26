#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"\nEnter the integer : ";
	cin>>n;
	cout<<"\nReverse of Natural Numbers from "<<n<<" to 1 : ";
	for(int i=n;i>=1;i--){
		cout<<i<<" ";
	}
}
