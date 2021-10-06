#include <iostream>

using namespace std;

int main()
{
    int n,count=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    for(int k=0; k<n-1; k++){
        for(int i=k+1; i<n; i++){
            if(arr[i]==arr[k]){//check for duplicates
                count++;//count duplicates
                for(int j=i; j<n-1; j++){//shift elements to left
                    arr[j]=arr[j+1];
                }
            }
        }
    }
    for(int i=0; i<(n-count); i++)
    cout<<arr[i]<<" ";//print array
    return 0;
}