//https://leetcode.com/problems/find-kth-bit-in-nth-binary-string/

//time complexity=O(n*n)

class Solution
{
public:
    char findKthBit(int n, int k)
    {
        string s = "0"; //S1
        string s1;
        while (n--)
        {
            s1 = s;
            reverse(s1.begin(), s1.end()); //reverse
            for (char &c : s1)
            {
                if (c == '0')
                    c = '1';
                else
                    c = '0'; //invert
            }
            s += "1" + s1;
        }
        return s[k - 1];
    }
};