#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter size of array= ";
    cin >> n;

    int ar[n];
    cout<<"Enter elements of array: ";
    for(int i=0; i<n ;i++){  //read
        cin>>ar[i];
    }
    cout << "Array entered successfully!"<<endl;;

    cout<<"Entered array is : ";
    for (int i = 0; i < n; i++){
        cout<<ar[i]<<" ";
    }
    return 0;
}