#include <iostream>

using namespace std;

int main()
{
    int n,reversed_no=0;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    while(n){
        int digit=n%10;
        reversed_no=reversed_no*10+digit;
        n/=10;
    }
    cout << "reversed number = " << reversed_no << endl;
    return 0;
}
