#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"Enter a number:"<<endl;
    cin >> x;
    if (x > 0)
    {
        cout << x << endl;
    }
    else if (x < 0)
    {
        cout << -x << endl;
    }
    else
       cout << 0 << endl;
    return 0;
}
