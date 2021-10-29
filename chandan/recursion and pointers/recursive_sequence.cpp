class Solution{
public:
    long long sequence(int N){
     
       long long x = 1LL, ans = 0LL;
        for(int i = 1;i <= N;i++){
            long long temp = 1LL;
            for(int j = 1;j <= i;j++,x++)
                temp *= x;
            ans += temp;
        }
        return ans;   // code here
    }
};

// { Driver Code Starts.
#include <iostream>
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}