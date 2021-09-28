#include <iostream>

using namespace std;
#define MAX_SIZE 100

 int maximum(int arr[],int index,int len);
 int minimum(int arr[],int index,int len);
int main()
{
    int arr[MAX_SIZE],i,N,max,min;
    cout<<"enter number of elements: ";
    cin>>N;
    cout<<endl<<"Enter Array Elements"<<endl;
    for(i=0;i<N;i++)
    {
        cin>>arr[i];
    }
   max=maximum(arr,0,N);
   min=minimum(arr,0,N);
   cout<<"Largest Element in Array is: "<<max<<endl;
   cout<<"Smallest Element in Array is: "<<min;
    return 0;
}

int maximum(int arr[],int index,int len)
{
    int max;
    if(index+1>=len-2)
    {
      if(arr[index]>arr[index+1])
      return arr[index];
      else
       return arr[index+1]  ; 
    }
    max=maximum(arr,index+1,len);
    if(arr[index] > max)
        return arr[index];
    else
        return max;
}

int minimum(int arr[], int index, int len)
{
    int min;

    if(index >= len-2)
    {
        if(arr[index] < arr[index + 1])
            return arr[index];
        else
            return arr[index + 1];
    }

    min = minimum(arr, index + 1, len);

    if(arr[index] < min)
        return arr[index];
    else
        return min;
}