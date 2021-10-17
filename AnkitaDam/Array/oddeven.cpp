#include <iostream>
using namespace std;
int main(){
    int n,odd=0,even=0;
    cout<<"Enter number of elements:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i]%2==0)
            even += 1;
        else
            odd+=1;
    }
    cout << "Number of odd elements: " <<odd <<endl;
    cout << "Number of even elements: " <<even;
    return 0;
}
