#include <iostream>
using namespace std;
int main(){
    int arr[100],p,N,b;
    
    cout<<"enter size";
    cin>>N;
    cout<<"enter position : "<<endl;
    cin>>p;
    cout<<"enter the element : "<<endl;
    cin>>b;
    cout<<"enter array of array";
    for(int i=0;i<=N;i++){
        cin>>arr[i];
    }
    if(p>N+1 || p<=0){
        cout<<"please take valid position : "<<endl;
    }
    else {
        for(int i=N;i>=p;i--){
            arr[i]=arr[i-1];

        }

        arr[p-1]=b;
        N++;


        cout<<"array after insertion looks : "<<endl;
        for(int i=0;i<N;i++){
            cout<<arr[i];
        }
    }
    return 0;


}
    