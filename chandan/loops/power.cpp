#include <iostream>

using namespace std;

int main()
{
    //question no 21
    
    cout<<"Hello World";
    int b,c,p=1;
    cout<<"enter base";
    cin>>b;
    cout<<"enter exponenet";
    cin>>c;
    for(int i=1;i<=c;i++){
        p=p*b;
    }
    cout<< "power is" << p;

    return 0;
}