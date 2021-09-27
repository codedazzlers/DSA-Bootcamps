#include <iostream>
using namespace std;
int main(){
    int n,p,q,t;
    cout<<"number of elements:"<<endl;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    cout<<"Given array:"<<endl;
    for(int i=1;i<=n;i++){
        cout<<a[i]<<"\t";
    }
    cout<<endl;
    p=1;
    q=n;
    while(p <= (n/2)){
        t=a[p];
        a[p]=a[q];
        a[q]=t;
        p++;
        q--;
    }
    cout<<"Reversed array:"<<endl;
    for(int i=1;i<=n;i++){
        cout<<a[i]<<"\t";
    }
    return 0;
}
