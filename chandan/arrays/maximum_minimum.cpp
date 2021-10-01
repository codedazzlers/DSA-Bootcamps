
#include <iostream>
using namespace std;
int showmaximum(int arr[], int a, int N){
    int max;
    if(a>=N-2){
    
        if(arr[a]>=arr[a+1]){
            return arr[a];
        }
        else{
            return arr[a+1];
        }
    }
    max=showmaximum(arr,a+1,N);
    if(arr[a]>max){
        return arr[a];
    }
    else{
        return max;
    }
}
   


int showminimum(int arr[],int a, int N){
    int min;
    if(a>=N-2){
    
        if(arr[a]<=arr[a+1]){
            return arr[a];
        }
        else{
            return arr[a+1];
        }
    }
    min=showminimum(arr,a+1,N);
    if(arr[a]<min){
        return arr[a];
    }
    else{
        return min;
    }


}
	

int main(){

    int arr[100],n,max,min;
    cin>>n;
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    max=showmaximum(arr,0,n);
    min =showminimum(arr,0,n);
    cout<<"minimum element : "<<min;
    cout<<"maximum element  : "<<max;
    return 0;


}


