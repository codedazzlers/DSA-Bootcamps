#include <iostream>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
                if(i==j)
                    sum+=a[i][j];
            }
    }
    cout<<sum;
    return 0;
}
