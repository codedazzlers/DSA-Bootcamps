#include <iostream>
using namespace std;
int main(){
    int n,neg=0;
    cout<<"Enter number of elements:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i]<0)
            neg += 1;
    }
    cout << "Number of negative elements: " <<neg;
    return 0;
}
