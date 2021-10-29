class Solution{
public:
    vector<ll> nthRowOfPascalTriangle(int n) {
        // code here.
        if(n==1)
        {
            vector<ll> tmp;
            tmp.push_back(1ll);
            return tmp;
        }
        vector<ll> tans = nthRowOfPascalTriangle(n-1);
        vector<ll> ans;
        ans.push_back(1);
        for(int i=1;i<tans.size();i++)
        ans.push_back((tans[i]+tans[i-1])%1000000007);
        ans.push_back(1);
        return ans;
    }
};


// { Driver Code Starts.


void printAns(vector<ll> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}
  // }