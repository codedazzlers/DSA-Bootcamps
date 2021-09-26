#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Give a 4-digit number: ";
    cin >> num;

    int first = num%10;
    int second = (num/10)%10;
    int third = (num/100)%10;
    int fourth = (num/1000)%10;

    cout << "Reversed number: ";
    cout << first*1000 + second*100 + third*10 + fourth;

    return 0;
}
