//https://leetcode.com/problems/search-a-2d-matrix-ii/
//time complexity=O(column_size+row_size)
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int row_pointer = 0, col_pointer = matrix[0].size() - 1;
        while (row_pointer < matrix.size() && col_pointer >= 0)
        {
            if (matrix[row_pointer][col_pointer] == target)
                return true;
            else if (matrix[row_pointer][col_pointer] > target)
                col_pointer--;
            else
                row_pointer++;
        }
        return false;
    }
};