#include <iostream>

using namespace std;
int length(string a)
{
    int i = 0;
    while (a[i])
    {
        i++;
    }
    return i;
}
int main()
{
    string a;
    cout<<"Enter a String to be reversed: ";
    cin >> a;
    cout<<" \reversed: ";
    for (int j = length(a) - 1; j >= 0; j--)
        cout << a[j];
    return 0;
}