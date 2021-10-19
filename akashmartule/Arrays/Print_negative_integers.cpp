#include<iostream>
#define MAX_SIZE 100
using namespace std;
int main()
{
    int arr[MAX_SIZE];
    int i,N;

    cout<<"Enter size of array"<<endl;

    cin>>N;
     //read the numbers
     cout<<"Enter elements in array"<<endl;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    for(int i=0;i<N;i++)
    {
        //printing negative elements
        if(arr[i]<0)
         {
         cout<<arr[i];
         }
    }

}



