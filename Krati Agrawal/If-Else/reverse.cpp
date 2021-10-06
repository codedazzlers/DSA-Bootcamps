#include<iostream>
using namespace std;

int main(){
    int num, reverse = 0, rem;
    cout << "Enter a number: ";
    cin >> num;
    while (num != 0)
    {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num /= 10;
    }
    cout << "Reversed Number: " << reverse << endl;
    return 0;
}