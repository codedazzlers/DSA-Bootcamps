#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter a number : ";
    cin >> x;
    if (x < 0)
    {
        cout <<"Absolute value is = "<< x * (-1);
    }
    else
        cout<< "Absolute value is = " << x;
    return 0;
}