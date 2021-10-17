#include<iostream>
using namespace std;
int main(){
	int num;
	//Enter number whose multiplication table is required
	cout <<"Enter number whose multiplication table is required::::"<<endl;
	cin >>num;
	int mul=0;
	cout <<"Now multiplication table of "<<num<<" is:::::::"<<endl;
	for(int i=0;i<=10;i++){
		mul=num*i;
		cout <<num<<" * "<<i<<" = "<<mul<<endl;
	}
}
