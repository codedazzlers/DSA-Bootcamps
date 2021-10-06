#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter size of array = ";
    cin >>n;
    
    int ar[n];
    cout<<"Enter elements of array = ";
    for(int i = 0; i<n ; i++){
        cin>>ar[i];
    }
    int max = ar[0];
    for (int i = 0; i < n; i++)
    {
        if (max < ar[i])
            max = ar[i];
    }
    int min = ar[0];
    for (int i = 0; i < n; i++)
    {
        if (min > ar[i])
            min = ar[i];
    }
    cout << "Largest element : " << max<<endl;
    cout << "Smallest element : " << min<<endl;
    return 0;
}