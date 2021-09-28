#include <iostream>

using namespace std;

int main()
{
    //question no 11
    cout<<"Hello World";
    char get,a,z,A,Z;
    cin>>get;
    if((get>='a') && (get<'z')){
        cout<<"lowercase";
    }
    else if((get>='A') && (get<'Z')){
        cout<<"uppercase";
    }

    return 0;
}