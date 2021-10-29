class Solution{
public:
    int countSetBits(int n)
    {
        int count = 0;
        while (n)
        {
          n &= (n-1) ;
          count++;
        }
        return count;
    }
    
    char profession(int level, int pos){
        
        int c = countSetBits(pos-1);
     
        
        return (c%2)?  'd' : 'e';
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int level, pos;
        cin>>level>>pos;
        
        Solution ob;
        if(ob.profession(level, pos) == 'd')
            cout<<"Doctor\n";
        else
            cout<<"Engineer\n";
    }
    return 0;
}