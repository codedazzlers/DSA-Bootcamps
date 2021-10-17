#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    cout << "Give two numbers: ";
    cin >> num1 >> num2;
    
    // assume, m<n
    int m, n;
    if (num1>num2) {
        m = num2;
        n = num1;
    } else {
        m = num1;
        n = num2;
    }

    int rem = n%m;
    while (rem != 0) {
        n = m;
        m = rem;
        rem = n%m;
    }

    cout << "HCF of " << num1 << " and " << num2 << " is " << m; 
    return 0;
}
