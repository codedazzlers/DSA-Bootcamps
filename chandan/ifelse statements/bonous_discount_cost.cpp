#include <iostream>

using namespace std;

int main()
{
    //question no.3
    cout<<"Hello World";
    int p,q,r;
    cin>>p;
    q=(p*100);
    if(q>1000){
        cout<<"oscar get discount ";
        r=p*100-0.1*p*100;
        cout<<"total cost is ";
        cout<<r;
    }
    else{
        cout<<"nosmart";
    }

    return 0;
}