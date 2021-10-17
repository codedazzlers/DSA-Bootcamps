#include <iostream>

using namespace std;

int main()
{
    int n,m,sum=0; cin>>n>>m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) cin>>arr[i][j];
    }
    for(int i=0; i<n; i++){
        sum=0;
        for(int j=0; j<m; j++){
            sum+=arr[i][j];
        }
        cout<<"sum of row "<<i+1<<" = "<<sum<<endl;
    }
    sum=0;
    for(int i=0; i<m; i++){
        sum=0;
        for(int j=0; j<n; j++){
            sum+=arr[j][i];
        }
        cout<<"sum of column "<<i+1<<" = "<<sum<<endl;
    }
    return 0;
}
