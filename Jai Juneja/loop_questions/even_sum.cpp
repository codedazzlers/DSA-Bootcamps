#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Give value of n: ";
    cin >> n;
    
    int sum = 0;
    for (int i = 2; i <= n; i += 2)
        sum += i;

    cout << "Sum of all even numbers upto " << n << " is " << sum << endl;
    return 0;
}
