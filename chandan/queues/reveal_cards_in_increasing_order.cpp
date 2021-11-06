class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
         int n = deck.size();
        sort(deck.begin(), deck.end());
        vector<int> ans(n);
        int index = 0;
        int flag = 0;
        queue<int> q;
        for(int i=0;i<n;i++)
            q.push(i);
        while(!q.empty())
        {
            if(flag == 0)
            {
                ans[q.front()] = deck[index++];
                q.pop();
            }
            else
            {
                q.push(q.front());
                q.pop();
            }
            flag = 1-flag;
        }
        return ans;
        
    }
};