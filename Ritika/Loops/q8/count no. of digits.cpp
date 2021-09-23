#include <iostream>
using namespace std;

int main()
{
    int  num;
    int count = 0;
    cout<<"enter any number:"<<endl;
    cin>>num;
    do
    {
        count++;
        num /= 10;
    } while(num != 0);

    cout<<"Total digits:"<<count<<endl;

    return 0;
}
