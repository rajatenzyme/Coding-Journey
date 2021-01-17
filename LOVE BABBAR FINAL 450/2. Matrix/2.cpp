class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int flag = 0;
        for(int r=0; r<m; r++)
        {
            for(int c = 0; c<n; c++)
            {
                if(matrix[r][c] == target)
                {
                    flag =1;
                    break;
                }
            }
        }
        if ( flag==1)
            return true;
        else
            return false;
    }
};