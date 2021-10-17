#include <iostream>
using namespace std;
int main(){
    int n,index,value;
    cout<<"Enter number of elements:";
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout<<"Before insertion:"<<endl;
    for(int i=0;i<n;i++){
        cout << a[i] <<"\t";
    }
    cout <<endl;
    cout<<"Enter index(starting from 0) where you want to insert: "<<endl;
    cin >> index;
    cout<<"Enter value of element you want to insert: "<<endl;
    cin >> value;
    for(int i=n;i>index;i--){
        a[i]=a[i-1];
    }
    a[index]=value;
    cout<<"After insertion:"<<endl;
    for(int i=0;i<=n;i++){
        cout << a[i] <<"\t";
    }
    return 0;
}
