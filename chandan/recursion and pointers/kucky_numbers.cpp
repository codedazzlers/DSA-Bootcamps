class Solution{
public:
 bool check(int n,int counter)
    {
        if(counter<=n) {
            if(n%counter==0)
                return false;
            
            n = n-n/counter;
            counter++;
            
            return check(n, counter);
        }
        else
            return true;
    }
    bool isLucky(int n) {
        // code here
        return check(n, 2);
    }
};

// { Driver Code Starts.
signed main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        Solution obj;
        //calling isLucky() function
        if(obj.isLucky(n))
            cout<<"1\n";//printing "1" if isLucky() returns true
        else
            cout<<"0\n";//printing "0" if isLucky() returns false
    }
    
}