#include<iostream>
using namespace std; 

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int ar[n];
    cout<<"Enter array elements: ";

    for(int i=0; i<n;i++){
        cin>>ar[i];
    }
    cout<<"Enter the position of element to be deleted: ";
    int pos;
    cin>>pos;
    if (pos < 0 || pos >= n) {
        cout << "Invalid\n";
    }
    else{
        for(int i = pos-1; i<n-1; i++ ){
            ar[i] = ar[i+1];
        }
        n--;
        cout << "Element deleted Successfully!" << endl;
        cout << "Elements in new array are: ";
        for (int i = 0; i < n; i++)
        {
            cout << ar[i] << " ";
        }
    }

    return 0;
}