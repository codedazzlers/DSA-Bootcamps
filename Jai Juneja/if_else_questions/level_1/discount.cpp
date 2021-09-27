#include <iostream>

using namespace std;

int main() {
    int quantity;
    cout << "Give quantity: ";
    cin >> quantity;
    
    int cost = 100 * quantity;

    if (cost > 1000) 
        cost = 0.9 * cost;
    
    cout << "The price is " << cost;
    return 0;
}
