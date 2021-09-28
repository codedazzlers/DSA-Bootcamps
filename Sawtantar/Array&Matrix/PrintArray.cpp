#include <iostream>
using namespace std;
#define MAX_SIZE 100

void array(int arr[], int start, int len);
int main()
{
   int arr[MAX_SIZE];
    int i,N;
    cout<<"EnTer Limit of values to be enter: ";
    cin>>N;
    cout<<endl<<"Enter elements "<<endl;
    for(i=0;i<N;i++)
    {
    cin>>arr[i];
    }
    cout<<"ARRRAY ELEMENTS ARE ";
    array(arr,0,N);
    return 0;
}
void array(int arr[], int start, int len)
{
    
    if(start>=len)
    return;
    cout<<  arr[start]<<"\t";
    array(arr,start+1,len);
}