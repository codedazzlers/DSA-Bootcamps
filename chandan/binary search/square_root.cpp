class Solution {
public:
    int mySqrt(int x) {
        int start=0,end=x;
        int ans=-1;
        while(start<=end){
            long long middle =(start+end)/2;
            if(middle*middle<=x){
                ans=middle;
                start=middle+1;
                
            }
            else if(middle*middle>x){
                end=middle-1;
            }
        }
        return ans;
    }
};