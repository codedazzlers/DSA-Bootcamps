#include <iostream>
using namespace std;

int main()
{
    int i,digit,n;

    cout<<"Enter a number:"<<endl;
    cin>>n;

    cout<<"Multiplication Table"<<endl;

    for(i=1;i<=10;i++)
    {
        
        cout<< n << "*" << i << "=" <<n*i<<endl;
        
    }
    


    return 0;
}