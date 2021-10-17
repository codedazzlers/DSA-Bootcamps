//IT WRITE THE SUM OF n NATURAL NUMBERS
#include<iostream>
using namespace std;
int main(){
	int num;
	int sum=0;
	int i=0;
	//Enter a number 
	cout << "Enter the number::" <<endl;
	cin >> num;
	while(i<num){
		sum=sum+i;
		i=i+1;
	}
	cout <<"Sum will be "<<sum<<endl;
	return 0;
}
