#include <iostream>
using namespace std;
int main(){
    int num, rem = 0, sum = 0;
    cout << "Enter a number : ";
    cin >> num;
    while (num != 0)
    {
        rem = num % 10;
        num = num / 10;
        sum = sum + rem;
    }
    cout << "The Sum of digits of the given number : " << sum << endl;
    return 0;
}