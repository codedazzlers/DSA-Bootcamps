//Count digits in a given number
#include<iostream>
using namespace std;
int main(){
	long long num;
	//Enter a number
	cout <<"Enter a number:::"<<endl;
	cin >>num;
	int count=0;
	for(int i=0;num>0;i++){
		count++;
		num=num/10;
	}
	cout <<"No of digits is:::"<<count<<endl;
}
