#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements:";
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        b[i]=a[i];
    }
    cout << "Original array: "<<endl;
    for(int i=0;i<n;i++){
        cout << a[i] <<"\t";
    }
    cout <<endl;
    cout << "Copied array: "<<endl;
    for(int i=0;i<n;i++){
        cout << b[i] <<"\t";
    }
    return 0;
}
