#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements= ";
    cin>>n;
    int ar[n];
    cout<<"Enter elements= ";
    
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }
    int count = 0;

    for(int i=0;i<n;i++){
        if(ar[i]<0){
            count++;
        }
    }
    cout<<"Total number of negetive elements in this array is = "<<count<<endl;
    return 0;
}