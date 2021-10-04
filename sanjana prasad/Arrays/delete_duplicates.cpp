#include<iostream>
using namespace std;

int main(){
    int n , i, j, k;
    cout<<"Enter size of array= ";
    cin>>n;

    int ar[n];
    cout<<"Enter elements of array= ";
    for (i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    for (i = 0; i < n; i++){
        for (j = i + 1; j < n; j++){
            if (ar[i] == ar[j]){
                for (int k = j; k < n - 1; k++){
                    ar[k] = ar[k + 1];
                }
                n--;
                j--;
            }
        }
    }
    cout << "After deleting the duplicates the new array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    return 0;
}