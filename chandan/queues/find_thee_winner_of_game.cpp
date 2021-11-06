class Solution {
public:
    int recur(int n, int k){
        if(n==0)return n;
        return (recur(n-1,k) + k) % n;
    }
    
    int findTheWinner(int n, int k) {
        return 1+recur(n,k);
        
    }
};