#include<iostream>
using namespace std;
int main()
{
    int arr[50];
    int size,i,toSearch,found;

    cout<<"number of elements in array: ";
    cin>>size;
    cout<<"enter elements in array";
    for(i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"element to search: "<<endl;
    cin>>toSearch;

    for(i=0;i<size;i++){
        if(arr[i]==toSearch){
            found=1;
            break;
        }

    }
    if(found==1){
        cout<<toSearch<<"is found at psition:  "<<i+1<<endl;
    }
    else
    {
        cout<<toSearch<<"element is not present in array";
    }
    return 0;

}