#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"\nEnter the integer : ";
	cin>>n;
	cout<<"\nMultiplication table of  "<<n<<" : \n";
	for(int i=1;i<=10;i++){
		cout<<n<<" X "<<i<<" = "<<(n*i)<<"\n";
	}

}
