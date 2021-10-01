#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array= ";
    cin>>n;

    int ar[n];
    cout<<"Enter elements = ";
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }
    int sum=0;
    for(int i= 0; i<n; i++){
        sum = sum + ar[i];
    }
    cout<<"Sum of elements of given array is = "<<sum<<endl;
    return 0;
}