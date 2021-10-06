#include <iostream>
using namespace std;
//time complexity O(n) and space O(1)
int maxNum(int arr[],int n){
int largest=INT_MIN;
for(int i=0;i<n;i++){
    if(arr[i]>largest)
      largest=arr[i];
}
return largest;
}
int minNum(int arr[],int n){
int min=INT_MAX;
for(int i=0;i<n;i++){
    if(arr[i]<min)
      min=arr[i];
}
return min;
}
int main()
{
    int i, n;
    /* Input array size */
    cout<<"Enter size of array: ";
     cin>>n;
     int arr[n];
    /* Input elements in array */
    cout<<"Enter "<<n<<" elements in the array : ";
    for(i=0; i<n; i++)
    {
      cin>>arr[i];
    }
   cout<<"Minimum Element is " << minNum(arr,n)<<endl;
   cout<<"Maximum Element is " << maxNum(arr,n)<<endl;


    return 0;
}