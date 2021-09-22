#include <iostream>
using namespace std;
int main()
{
    int n,reversed_number=0;
    cin>>n;
    while(n){
        int digit=n%10;
        reversed_number=reversed_number*10+digit;
        n/=10;
    }
    cout << "reversed number = " << reversed_number << endl;
    return 0;
}
