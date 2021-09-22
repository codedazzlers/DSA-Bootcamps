#include <iostream>
using namespace std;

int main()
{
    int i, n, sum=0;

    cout<<"Enter the upper limit:"<<endl;
    cin>>n;


    for(i=2; i<=n; i+=2)
    {

        sum += i;
    }

   cout<<"Sum of all even number between 1 to"<< n<<" = "<< sum<<endl;

    return 0;
}
