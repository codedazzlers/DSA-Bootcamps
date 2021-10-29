class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
       string str1 = "";
        string str2 = "";

        for (string str: word1){
            str1 += str;
        }

        for (string str: word2){
            str2 += str;
        }

        if (str1.compare(str2) == 0)
            return true;
        return false;
    }
};
