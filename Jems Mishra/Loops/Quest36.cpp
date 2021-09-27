#include <iostream>
using namespace std;

int main()
{
    int i=0,j=1,k=0,num;

    cout<<"Enter a number:"<<endl;
    cin>>num;

    for(i=0;i<=num;i++)
    {
        cout<<k<<endl;

        i=j;
        j=k;
        k=i+j;
    }

    return 0;
}