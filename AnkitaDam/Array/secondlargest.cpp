#include <iostream>
using namespace std;
int main(){
    int n,max_1,max_2;
    cout<<"Enter number of elements:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    max_1=INT_MIN;
    max_2=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>max_1){
            max_2=max_1;
            max_1=a[i];
        }
        if (a[i]<max_1 && a[i]>max_2){
            max_2=a[i];
        }
    }
    cout << "Second largest: " << max_2;
    return 0;
}
