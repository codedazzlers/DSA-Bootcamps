// reversing the 4 digit number
#include <iostream>

using std::cout; using std::cin;

int main() {
    int num;
    cin >> num;
    int first_num = num%10;
    int sec_num = (num/10)%10;
    int third_num = (num/100)%10;
    int fourth_num = (num/1000)%10;
    int new_num = (first_num*1000) + (sec_num*100) + (third_num*10) + fourth_num;
    cout << "Reversed number is " << new_num << '\n';
    return 0;
}