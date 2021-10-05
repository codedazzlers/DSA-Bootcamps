/*Q8.Write a C program to search an element 
in an array.Q18*/
#include<iostream>
using namespace std;
int main(){
    int size,arr[100],search,a=0;
    cout<<"Enter the size of an array\n";
    cin>>size;
    cout<<"Enter the elements\n ";
    for(int i=0;i<size;i++){
       cin>>arr[i];
    }
    cout<<"Enter the elements u want to search\n";
    cin>>search;
    for(int u=0;u<size;u++){
        if(arr[u]==search){
            cout<<"element found at "<<u<<"index";
            a+=1;
            break;
        }
    }
    if(a==0){
      cout<<"Element not found";
    }
     return 0;
}