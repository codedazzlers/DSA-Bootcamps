#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array = ";
    cin>>n;

    int ar[n], freq[n];
    cout<<"Enter elements of array = ";
    for(int i = 0; i<n ; i++){
        cin>>ar[i];
        freq[i] = -1;
    }

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

    for(int i=0;i<n;i++){
        if(freq[i]!=0){
            cout<<"Frequency of "<<ar[i]<<" is "<<freq[i]<<endl;
        }
    }
    return 0;
}