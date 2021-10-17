#include<iostream>
using namespace std;
int main()
{
    int start;

    cout<<"Enter the starting number:"<<endl;
    cin>>start;
    cout<<"All the natural numbers from  " <<start<< " to 1 are "<<endl;
    for(int i= start;i>=1;i--)
    {
        cout<<i<<endl;
    }
return 0;

}
