class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int j,k,s=0,t=0;
        int n=patterns.size();
        for(int i=0;i<n;i++){
            for(j=0,k=0; word[j]&&patterns[i][k];j++){
                if(patterns[i][k] == word[j]){
                    k++;
                }
                else{
                    k=0;
                }
            }
            if(k==patterns[i].length()){
                s++;
            }
        }
        return s;
    }
};