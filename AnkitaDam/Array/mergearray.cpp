#include <iostream>
using namespace std;
int main(){
    int m,n,p,q,r;
    cout<<"Enter number of elements of both arrays:";
    cin>>m>>n;
    int a[m],b[n],c[m+n];
    for(int i=0;i<m;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    cout<<"Given sorted arrays:"<<endl;
    for(int i=0;i<m;i++){
        cout << a[i] <<"\t";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout << b[i] <<"\t";
    }
    cout<<endl;
    p=0;
    q=0;
    r=0;
    while(p<m && q<n){
            if(a[p]<b[q]){
                c[r]=a[p];
                p++;
                r++;
            }
            else{
                c[r]=b[q];
                q++;
                r++;
            }
    }
    while(p<m){
        c[r]=a[p];
        p++;
        r++;
    }
    while(q<n){
        c[r]=b[q];
        q++;
        r++;
    }
    cout<<"Merged array:"<<endl;
    for(int i=0;i<m+n;i++){
        cout << c[i] <<"\t";
    }
    return 0;
}
