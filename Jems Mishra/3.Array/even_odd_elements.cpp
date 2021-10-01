
#include <iostream>
using namespace std;

int main()
{
    int arr[7]={54,2,8,543,345,7,556};
    int i,n,m,num;

    n=0;
    m=0;


    for(i=0;i<7;i++)
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
