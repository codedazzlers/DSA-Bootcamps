#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements : ";
    cin>>n;
    int ar[n];
    cout<<"Enter Elements: ";

    for(int i=0;i<n;i++){ //read
        cin>>ar[i];
    }
    cout<<"Array inputted successfully"<<endl;
    int even=0,odd=0;
    for(int i=0;i<n;i++){
        if(ar[i]%2==0){
          even++;
        }
        else{
            odd++;
        }
    }
    cout<<"The count of even numbers in the array : "<<even<<endl;
    cout<<"The count of odd numbers in the array: "<<odd<<endl;
    return 0;
}
