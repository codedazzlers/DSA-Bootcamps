#include <iostream>
using namespace std;

int main()
{
    int i, num;


    cout<<"Enter number to print table: "<<endl;
    cin>>num;

    for(i=1; i<=10; i++)
    {
        cout<<num <<" * " << i <<" = "<< num*i<<endl;
    }

    return 0;
}
