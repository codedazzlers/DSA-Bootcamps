#include <iostream>
using namespace std;
int main(){
    int m,n,k;
    int a[100][100];
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cin>>k;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            a[i][j]=a[i][j]*k;
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
