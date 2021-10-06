#include <iostream>

using namespace std;

int main()
{
    int n,m,c=0; cin>>n>>m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) cin>>arr[i][j];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]==0) c++;
        }
    }
    if(c>=((n*m)/2)) cout<<"yes";
    else cout<<"no";
    return 0;
}
