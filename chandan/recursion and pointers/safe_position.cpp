class Solution {
  public:
    int josephus(int n, int k)
    {
      if (n == 1)
        return 1;
      else
        /* The position returned by josephus(n - 1, k) is adjusted because the
           recursive call josephus(n - 1, k) considers the original position
           k%n + 1 as position 1 */
        return (josephus(n - 1, k) + k-1) % n + 1;
    }    
    
    int safePos(int n, int k) {
        
        return josephus(n,k);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        
        cin>>n>>k;

        Solution ob;
        cout << ob.safePos(n,k) << endl;
    }
    return 0;
}