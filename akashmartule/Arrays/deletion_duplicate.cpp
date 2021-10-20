#include<iostream>
using namespace std;
int main()
{
    int arr[50];
    int i,j,size,k;

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
                for(k=j;k<size-1;k++){
                    arr[k]=arr[k+1];
                }
                size--;
                j--;
            }
        }
    }
    cout<<"array after deletion of duplicate elements"<<endl;
    for(i=0;i<size;i++){
        cout<<arr[i];
    }
    return 0;
}