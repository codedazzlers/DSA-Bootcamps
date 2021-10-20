#include<iostream>
using namespace std;
int main()
{
    int arr[50];
    int i,j,size,count=0;

    cout<<"enter number of elements: ";
    cin>>size;

    for(i=0;i<size;i++){
        cin>>arr[i];
    }
      /*
     * Find all duplicate elements in array
     */
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
                break;
            }
        }
    }
    cout<<"Total number of duplicates elements found in array: "<<count;
    return 0;
}