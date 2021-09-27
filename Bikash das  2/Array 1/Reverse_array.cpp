#include<iostream>
#define MAX_SIZE 100
using namespace std; 

int main(){

    int n;

    cout<<"Enter size of the array: "<<endl;
    cin>>n;
 	int arr[MAX_SIZE];
    /* Input array elements */
    cout<<"Enter elements in array: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    /*
     * Print array in reversed order
     */
    cout<<"\nArray in reverse order: ";
    for(int i = n-1; i>=0; i--)
    {
        cout<<"\t"<<arr[i];
    }

    return 0;
}
