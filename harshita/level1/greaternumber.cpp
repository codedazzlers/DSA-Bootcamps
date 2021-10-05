#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "Enter a, b";
    cin>> a >> b;
    if(a > b){
        cout << a << " is greater than " << b;
    }
    else if(a=b){
        cout << a << " same value";
    }
    else
        cout << b << " is greater than " << a;
    
}
