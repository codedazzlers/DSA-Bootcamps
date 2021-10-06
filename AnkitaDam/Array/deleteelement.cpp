#include <iostream>
using namespace std;
int main(){
    int n,index;
    cout<<"Enter number of elements:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout<<"Before deletion:"<<endl;
    for(int i=0;i<n;i++){
        cout << a[i] <<"\t";
    }
    cout <<endl;
    cout<<"Enter index(starting from 0) where you want to delete: "<<endl;
    cin >> index;
    for(int i=index;i<=n-2;i++){
        a[i]=a[i+1];
    }
    cout<<"After deletion:"<<endl;
    for(int i=0;i<=n-2;i++){
        cout << a[i] <<"\t";
    }
    return 0;
}
