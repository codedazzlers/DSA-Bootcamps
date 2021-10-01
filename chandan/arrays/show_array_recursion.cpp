//qno1. print araaay usin recursion
#include <iostream>
using namespace std;
void showoutput(int arr[], int a, int n){

    if(a>=n)
    return ;
    
    cout<<arr[a];

    showoutput(arr,a+1,n);

}
	

int main(){

    int arr[100],n;
    cin>>n;
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    cout<<"arrary looks like this :"<<endl;
    showoutput(arr,0,n);
}