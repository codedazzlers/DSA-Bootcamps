#include<iostream>
using namespace std;
int exp(int n)
{
    if(n==0)
    return;

    // odd
    int mini_answer=exp(n/2);
    if(n&1)
    {
        return 2*mini_answer*mini_answer;

    }
    else{
        return mini_answer*mini_answer;
    }
}

int main()
{
    int a,b;
    cout<<"enter the number for a and b: "<<endl;
    cin>>a>>b;
    cout<<a<<" to the power of "<<b<<"is:  "<<exp(a,b)<<endl;
    return 0;
}
