#include<iostream>
using namespace std;
int main()
{
    int arr[50],i,size,pos;

    cout<<"size of array: "<<" "<<endl;
    cin>>size;

    cout<<"enter elements in array: "<<endl;
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    for(i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<"enter position of deletion: "<<" "<<endl;
    cin>>pos;

        if(pos>size || pos<0){
        cout<<" position is invalid , please enter valid position";
          }
        else{

        for(i=pos-1;i<size-1;i++){
            arr[i]=arr[i+1];
        }
        size--;
        cout<<"array after deleting element from given position: "<<"  ";
        for(i=0;i<size;i++){
        cout<<arr[i]<<"  ";
         }
        }
        return 0;
}