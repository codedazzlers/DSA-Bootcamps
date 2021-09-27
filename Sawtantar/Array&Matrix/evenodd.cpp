#include <iostream>
using namespace std;

int main()
{
    int arr[5]={22,8,33,7,900};
    int i,n,m,num;

    n=0;
    m=0;


    for(i=0;i<5;i++)
    {
        if(arr[i]%2 == 0)
        {
            n++;
        }
        else
        {
            m++;
        }
    }
        cout<<"Even numbers are:"<<n<<endl;
        cout<<"Odd numbers are:"<<m<<endl;

        return 0;
}
