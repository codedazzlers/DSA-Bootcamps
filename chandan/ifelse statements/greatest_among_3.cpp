#include <iostream>

using namespace std;

int main()
{
    //question no.6
    cout<<"Hello World";
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        cout<<"A";
    }
    else if((a<=b)&&(b>c)){
        cout<<"B";
    }
    else {
        cout<<"C";
    }


    return 0;
}