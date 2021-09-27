#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    cout << "Negative elements of array are:" <<endl;
    for(int i=0;i<n;i++){
        if(a[i]<0){
            cout << a[i] << "\t";
        }
    }
    return 0;
}
