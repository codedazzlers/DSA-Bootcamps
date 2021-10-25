class Solution
{
public:
    string reverseWords(string s)
    {
        stack<string> store; // To store all the words
        for (int i = 0; i < s.length(); i++)
        {
            string word = "";
            if (s[i] == ' ') // If there is no word/space then it continues
            {
                continue;
            }
            while (s[i] != ' ' && i < s.length()) // if no space or letter is present then add that to word
            {
                word += s[i];
                i++;
            }
            store.push(word); // Push this word into store
        }

        string ans = ""; // To store final answer
        while (!store.empty())
        {
            ans += store.top(); // Stack uses LIFO (Last In First Out) Method. So last word comes out first
            store.pop();        // Used to delete that word from store
            if (!store.empty())
            {
                ans += " ";
            }
        }
        return ans;
    }
};