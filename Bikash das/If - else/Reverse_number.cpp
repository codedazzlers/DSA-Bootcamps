//Rverse the order of given 4th digit number
#include<iostream>
using namespace std;
int main(){
	int number;
	//Enter a 4th digit number
	cout << "Enter a 4th digit number"<<endl;
	cin>>number;
	int f,s,t,fh;
	fh=number%10;
	number=number/10;
	t=number%10;
	number=number/10;
	s=number%10;
	number=number/10;
	f=number%10;
	int upd_num=0;
	upd_num=(fh*1000)+(t*100)+(s*10)+f;
	cout <<"The reverse of "<< number<<" is "<<upd_num<<endl;
	return 0;
}
