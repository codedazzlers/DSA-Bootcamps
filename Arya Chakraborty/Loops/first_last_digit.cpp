#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n==0) cout<<"0 0"<<endl;
    else{
        int last_digit=n%10;
        while(n>=10) n/=10;
        int first_digit=n;
        cout<<first_digit<<" "<<last_digit;
    }
    return 0;
}
