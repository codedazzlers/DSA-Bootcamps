#include <iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter number of elements:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum = sum + a[i];
    }
    cout << "Sum of array elements is: " <<sum;
    return 0;
}
