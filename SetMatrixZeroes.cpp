class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        int m = matrix.size(),n = matrix[0].size();
        set<int> row,column;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    row.insert(i);
                    column.insert(j);
                }
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(row.find(i)!=row.end())
                    matrix[i][j]=0;
                else if(column.find(j)!=column.end())
                    matrix[i][j]=0;
            }
        }
        
    }
};