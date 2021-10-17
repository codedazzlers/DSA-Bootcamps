#include <iostream>
using namespace std;

int main(){
    int n, element, pos;
    cout<<"Enter number of elements = ";
    cin>>n;
    int ar[n];
    cout<<"Enter "<<n<<" elements = ";
    for(int i = 0; i<n ;i++){
        cin>>ar[i];
    }

    cout << "Enter Element to Insert: ";
    cin >> element;
    cout << "At What Position ? ";
    cin>>pos;
    for (int i =n; i >= pos; i--){
        ar[i] = ar[i - 1];
    }
    ar[pos-1] = element;
    n++;
    cout << "The New Array is: ";
    for (int i = 0; i < n; i++)
        cout << ar[i] << "  ";
    return 0;
}