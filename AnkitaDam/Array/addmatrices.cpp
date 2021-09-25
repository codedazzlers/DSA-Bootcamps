#include <iostream>
using namespace std;
int main(){
    int m,n;
    int a[100][100];
    int b[100][100];
    int c[100][100];
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<c[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
