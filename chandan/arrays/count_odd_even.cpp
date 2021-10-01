#include <iostream>
using namespace std;
int main(){
    int arr[100],N;
    int max1,max2;
    cout<<"enter array";
    cin>>N;
    for(int i=0;i<=N;i++){
        cin>>arr[i];
    }
    int even=0;
    int odd=0;
    for(int i=0;i<=N;i++){
        if(arr[i]%2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"total even present in array : "<<even<<endl;
    cout<<"total odd present in array : "<<odd<<endl;
    return 0;

}