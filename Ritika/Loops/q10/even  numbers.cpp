
#include <iostream>
using namespace std;
int main()
{
    int i, n;


    cout<<"Print all even numbers till: "<<endl;
    cin>>n;

   cout<<"Even numbers from 1 to"<< n << " are:" <<endl;


    for(i=1; i<=n; i++)
    {

        if(i%2 == 0)
        {
           cout<<i<<endl;
        }
    }

    return 0;
}
