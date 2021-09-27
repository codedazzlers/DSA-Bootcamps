#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements : ";
    cin>>n;
    int ar[n],freq[n];
    cout<<"Enter Elements: ";

    for(int i=0;i<n;i++){ //read
        cin>>ar[i];
        freq[i]=-1;
    }
    cout<<"Array inputted successfully"<<endl;

    //checking for duplicates
    int count;
    for(int i=0;i<n;i++){
        count=1;
        for(int j=i+1;j<n;j++){
           if(ar[i]==ar[j]){
               count++;
               freq[j]=0;
           }
        }
        if(freq[i]!=0){
            freq[i]=count;
        }
    }

    // printing output

    for(int i=0;i<n;i++){
        if(freq[i]!=0){
            cout<<"Count of "<<ar[i]<<" is "<<freq[i]<<endl;
        }
    }
    return 0;
}
