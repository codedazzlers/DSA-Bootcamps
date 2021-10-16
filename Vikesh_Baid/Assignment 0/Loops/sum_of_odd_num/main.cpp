#include <iostream>

using std::cout; using std::cin;
int main() {
    int lower_limit, upper_limit,sum = 0;
    cin >> lower_limit;
    cin >> upper_limit;
    if (lower_limit % 2 == 0)
        lower_limit++;
    
    // time compplexity O(n)
    while (lower_limit <= upper_limit) {
        sum+=lower_limit;
        lower_limit+=2;
    }
    cout << sum << '\n';

    //time complexity O(1)
    int n;
    sum = 0;
    cout << "Give the upper limit till which sum of odd num is required: ";
    cin >> n;
    n = n/2;
    sum = n*n;
    cout << sum << '\n';
    return 0;
}