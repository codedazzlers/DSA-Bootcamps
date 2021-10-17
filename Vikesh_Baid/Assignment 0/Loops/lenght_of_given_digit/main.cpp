#include <iostream>

using std::cin; using std::cout;

int main() {
    int num, count=0;
    cout << "Enter the number ";
    cin >> num;
    do {
        count++;
        num = num/10;
    }while(num != 0);
    cout << "Length of the entered digit is " << count << '\n';
    return 0;
}