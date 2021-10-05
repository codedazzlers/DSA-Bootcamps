#include<iostream>
using namespace std;

int main()
{
    string str;
    int l;
    cout<<"Enter a String: ";
    cin >> str;
    for(l = 0; str[l] != 0; l++);
    cout<<"String From Backward is: ";
    for(int i = l - 1; i >= 0; i--)
    {
        cout << str[i];
    } 
    return 0;
}