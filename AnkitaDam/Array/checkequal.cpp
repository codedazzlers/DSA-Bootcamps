#include <iostream>
using namespace std;
int main(){
    int m,n,p,q;
    int a[100][100];
    int b[100][100];
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
        }
    }
    for(p=0;p<m;p++){
        for(q=0;q<n;q++){
            if(a[p][q]!=b[p][q])
                break;
        }
    }
    if(p==m && q==n)
        cout<<"Equal";
    else
        cout <<"Not equal";
    return 0;
}

