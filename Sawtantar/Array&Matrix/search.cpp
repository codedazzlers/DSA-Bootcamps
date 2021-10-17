#include <iostream>
using namespace std;

int main()
{
    int array[100];
    int i,n,x,check;

    cout<<"Enter number of elements of the Array:"<<endl;
    cin >> n;

    cout<<"Array:"<<endl;
    for (i=0;i<n;i++)
    {
        cin >> array[i];
    }

    cout<< "-----ARRAY-----"<<endl;
    for (i=0;i<n;i++)
    {
        cout << array[i]<<"\t";
    }

    cout<<"\n"<<"Enter element to search:"<<endl;
    cin >> x;

    check = 0;
    for (i=0;i<n;i++)
    {
        if (array[i] == x)
        {
            check = 1;
            break;
        }
    }

    if (check == 1)
    {
        cout <<"Element is at Location:"<<"  "<< i+1 <<endl;
    } 

    return 0;
}