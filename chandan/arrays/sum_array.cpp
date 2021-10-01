//qno1. print sum of arrays
#include <iostream>
using namespace std;
int showarray(int arr[], int a, int n){

    if(a>=n)
    return 0;
    
    cout<<arr[a];

    return(arr[a]+showarray(arr,a+1,n));

}
	

int main(){

    int arr[100],n,grandsum;
    cin>>n;
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    cout<<"arrary looks like this :"<<endl;
    grandsum=showarray(arr,0,n);
    cout<<"grandsum : "<<grandsum;


}