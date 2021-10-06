#include <iostream>
using namespace std;
int main(){
    int n,p=0,q=0;
    cout<<"Enter no of elements"<<endl;
    cin>>n;
    int a[n],e[n],o[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            e[p]=a[i];
            p++;
        }
        else{
            o[q]=a[i];
            q++;
        }
    }
    cout<<"EVEN:"<<endl;
    for(int i=0;i<p;i++)
        cout<<e[i]<<"\t";
    cout<<endl;
    cout<<"ODD:"<<endl;
    for(int i=0;i<q;i++)
        cout<<o[i]<<"\t";
    return 0;
}
