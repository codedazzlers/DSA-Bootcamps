class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int i = 0, j = 0, p = 0, q = 0;
        
        while (i < word1.size() && j < word2.size()) {
            if (word1[i][p++] != word2[j][q++])
                return false;

            if (p == word1[i].size()) {
                i++;
                p = 0;
            }

            if (q == word2[j].size()) {
                j++;
                q = 0;
            }
        }
        
        if (i < word1.size() || j < word2.size())
            return false;
        else
            return true;
    }
};
