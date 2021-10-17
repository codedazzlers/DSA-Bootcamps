#include <iostream>

using namespace std;

int main()
{

    //question  17
    
    cout<<"Hello World";
    int n,k=0,num;
    cin>> n;
    num=n;
    while(n!=0){
        k=(k*10)+(n%10);
        n/=10;
    }
    if(k==num){
    cout<<num << "is a palindrome";
    }
    else{
        cout<<num << "is a not palindrome";
    }

    return 0;
}