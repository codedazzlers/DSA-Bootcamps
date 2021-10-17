//https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/submissions/
//time complexity=O(column_size*row_size)

class Solution
{
public:
    vector<int> kWeakestRows(vector<vector<int>> &mat, int k)
    {
        vector<int> soldiers(mat.size());
        for (int i = 0; i < mat.size(); i++)
        {
            int sum = 0;
            for (int j = 0; j < mat[i].size(); j++)
            {
                sum += mat[i][j];
            }
            soldiers[i] = sum;
        }
        int i = 0;
        vector<int> weakest(k);
        while (i < k)
        {
            int min = INT_MAX;
            int index = 0;
            for (int i = 0; i < soldiers.size(); i++)
            {
                if (soldiers[i] < min)
                {
                    min = soldiers[i];
                    index = i;
                }
            }
            weakest[i] = index;
            soldiers[index] = INT_MAX;
            i++;
        }
        return weakest;
    }
};