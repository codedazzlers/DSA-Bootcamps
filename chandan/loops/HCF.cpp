#include <iostream>

using namespace std;

int main()
{
    //question no 24
    
    cout<<"Hello World";
    int a,b,min,common=1;
    cout<<" enter two number";
    cin>>a>>b;
    if(a>b){
        min=a;
    }
    else{
        min=b;
    }
    for(int i=1;i<=min;i++){
        if((a%i==0) && (b%i==0)){
            common=i;
        }
    }
    cout<<"hcf is "<<common;

    return 0;
}
