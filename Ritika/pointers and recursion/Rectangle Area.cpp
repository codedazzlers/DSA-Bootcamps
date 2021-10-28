//https://leetcode.com/problems/rectangle-area/submissions/

//time complexity=O(1);

class Solution
{
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2)
    {
        int length1 = abs(ax1 - ax2);
        int breadth1 = abs(ay1 - ay2);
        int length2 = abs(bx1 - bx2);
        int breadth2 = abs(by1 - by2);
        int ans = length1 * breadth1 + length2 * breadth2;
        int commonArea = max(min(ax2, bx2) - max(ax1, bx1), 0) * max(min(ay2, by2) - max(ay1, by1), 0);
        return ans - commonArea;
    }
};