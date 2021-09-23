// Program to print number in words

#include<iostream>
#include<math.h>
using namespace std;

int palindrome(int num1){
	int num2, rev=0, num;
	num2=num1;
	while (num2!=0){
		num=num2%10;
		rev=num+rev*10;
		num2=num2/10;
	}
	return rev;
}

int main(){
	int num, val, digits;
	cout<<"Enter a Number : ";
	cin>>num;
	digits=(int) log10(num);
	num=palindrome(num);
	digits=digits-((int)log10(num));
	while (num!=0){
		val=num%10;
		switch(val){
			case 1:
				cout<<"one ";
				break;
			case 2:
				cout<<"two ";
				break;
			case 3:
				cout<<"three ";
				break;
			case 4:
				cout<<"four ";
				break;
			case 5:
				cout<<"five ";
				break;
			case 6:
				cout<<"six ";
				break;
			case 7:
				cout<<"seven ";
				break;
			case 8:
				cout<<"eight ";
				break;
			case 9:
				cout<<"nine ";
				break;
			case 0:
				cout<<"zero ";
				break;
		}
		num=num/10;
	}
	while(digits){
		cout<<"zero ";
		digits--;
	}
	
	return 0;
}

