#include <iostream>
using namespace std;
int main(){
    /*considering two matrices a mXn and nXk */
    int m,n,k;
    int a[100][100];
    int b[100][100];
    int c[100][100];
    cin>>m>>n>>k;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            cin>>b[i][j];
        }
    }
    for(int p=0;p<m;p++){
        for(int q=0;q<k;q++){
            c[p][q]=0;
            for(int r=0;r<n;r++){
                c[p][q]=c[p][q]+a[p][r]*b[r][q];
            }
            cout<<c[p][q]<<"\t";
        }
         cout<<endl;
    }
    return 0;
}
