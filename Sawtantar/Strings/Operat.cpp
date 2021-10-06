class Solution  
{
    public:
    int finalValueAfterOperations(vector<string>& o)
    {
        int n=o.size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(o[i]=="++X"||o[i]=="X++")
            
                c++;
            
            else if(o[i]=="--X"||o[i]=="X--")
            
                c--;
            
        }
        return c;
    }
};