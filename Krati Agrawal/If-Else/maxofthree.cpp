#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    int max = 0, min = 100;
    cout << "Enter Person 1's age: ";
    cin >> a;
    cout << "Enter Person 2's age: ";
    cin >> b;
    cout << "Enter Person 3's age: ";
    cin >> c;
    if (a > b && a > c)
    {
        max = a;
    }
    if (a < b && a < c)
    {
        min = a;
    }
    if (b > c && b > a)
    {
        max = b;
    }
    if (b < c && b < a)
    {
        min = b;
    }
    if (c > a && c > b)
    {
        max = c;
    }
    if (c < a && c < b)
    {
        min = c;
    }
    cout << "The Oldest is " << max << endl;
    cout << "The Youngest is " << min << endl;

    return 0;
}