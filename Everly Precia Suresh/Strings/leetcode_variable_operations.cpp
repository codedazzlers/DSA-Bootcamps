class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int res=0;
        for(auto i:operations){
            if(i[0]=='+'|| i[1]=='+')
                res++;
            else if(i[0]=='-'|| i[1]=='-')
                res--;
        }
        return res;
    }
};