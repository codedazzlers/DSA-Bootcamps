#include<iostream>
using namespace std;
int main(){
	char letter;
	//Enter a letter
	cout << "Enter a letter::::" <<endl;
	cin >> letter;
	int letter_num=letter;
	cout << "ASCII value of this letter" << letter_num <<endl;
	if(letter_num>=65 && letter_num<=90)
	cout << "Entered letter is UPPER case letter" <<endl;
	else if(letter_num>=97 && letter_num<=122)
	cout << "Entered letter is Lower case letter" <<endl;
	else
	cout << "You entered wrong letter" <<endl;
}
