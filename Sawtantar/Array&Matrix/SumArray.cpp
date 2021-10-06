#include <iostream>
using namespace std;
#define MAX_SIZE 100

int array(int arr[], int start, int len);
int main()
{
   int arr[MAX_SIZE];
    int i,N,sum;
    cout<<"EnTer Limit of values to be enter: ";
    cin>>N;
    cout<<endl<<"Enter elements "<<endl;
    for(i=0;i<N;i++)
    {
    cin>>arr[i];
    }
    cout<<"SUM OF ARRRAY ELEMENTS ARE ";
    sum=array(arr,0,N);
    cout<<endl<<sum;
    return 0;
}
int array(int arr[], int start, int len)
{
    
    if(start>=len)
    return 0;
   return arr[start]+array(arr,start+1,len);
  
}