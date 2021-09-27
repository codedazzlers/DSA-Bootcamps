#include <iostream>
using namespace std;
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int i, n, sum=0;
    cout<<"Enter size of the array: "<<endl;
    cin>>n;
    cout<<"Enter elements in the array: "<<endl;
    for(i=0; i<n; i++)
    {
       cin>>arr[i];
    }

    for(i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }


    cout<<"Sum of all elements of array = "<<sum<<endl;

    return 0;
}
