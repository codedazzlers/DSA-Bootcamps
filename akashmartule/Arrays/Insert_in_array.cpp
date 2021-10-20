#include<iostream>
using namespace std;
int main()
{
    int arr[50],i,size,pos,insert;
    cout<<"enter number of elements in array"<<"  ";
    cin>>size;

    cout<<"elements in array:  "<<endl;
    for(i=0;i<size;i++){
        cin>>arr[i];

    }
    
    for(i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }

    cout<<"enter element to insert";
    cin>>insert;
    cout<<"position to be insert";
    cin>>pos;

    for(i=size;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=insert;
    cout<<"array after inserting"<<"  ";
    if(pos>size+1 || pos<0 ){
        cout<<"invalid position please enter valid position";
    }
    else{
       for(i=0;i<size+1;i++){
        cout<<arr[i]<<" ";
       }
    }
    return 0;

}