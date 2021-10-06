
//C++ program to put even and odd elements of array in two separate array
//time complexity O(n) and space O(n)
#include <iostream>
using namespace std;
int main()
{  int n;
    cout<<"Enter size of array: ";
     cin>>n;
    int arr[n],even[n],odd[n],evncnt=0,oddcnt=0,i;
    cout<<"Input numbers in the array";
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<n;i++)
    {
            if(arr[i]%2==0)
                even[evncnt++]=arr[i];
            else 
                odd[oddcnt++]=arr[i];
    }
    cout<<"The even numbers are: ";
    for(i=0;i<evncnt;i++)
        cout<<even[i]<<" ";
    cout<<"\nThe odd numbers are: ";
    for(i=0;i<oddcnt;i++)
        cout<<odd[i]<<" ";
}