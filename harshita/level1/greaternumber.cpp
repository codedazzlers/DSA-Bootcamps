#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "Enter a, b";
    cin>> a >> b;
    if(a > b){
        cout<<a << " value of a is greater ";
    }
    else if(a=b){
        cout << a << " same value";
    }
    else
        cout <<b<< " value of b is greater";
    
}