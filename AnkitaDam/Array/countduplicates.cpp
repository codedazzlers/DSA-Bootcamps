#include <iostream>
using namespace std;
int main(){
    int n,c=1,dup=0;
    cout<<"Enter number of elements:";
    cin>>n;
    int a[n],freq[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        freq[i]=-1;
    }
    cout<<"Given array:"<<endl;
    for(int i=0;i<n;i++){
        cout << a[i] <<"\t";
    }
    cout <<endl;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                c=c+1;
                freq[j]=0;
            }
        }
        if(freq[i]!=0)
            freq[i]=c;
        c=1;
    }
    cout << "Number of duplicate elements are:"<<endl;
    for(int i=0;i<n;i++){
            if(freq[i]>1)
                dup=dup+(freq[i]-1);
    }
    cout << dup;
    return 0;
}
