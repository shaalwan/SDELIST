class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> res;
        res.push_back({1});
        for(int i=1;i<numRows;i++)
        {
            vector<int> n,k = res.back();
            int m = k.size();
            n.push_back(1);
            for(int j=1;j<m;j++)
            {
                n.push_back(k[j-1]+k[j]);
            }
            n.push_back(1);
            res.push_back(n);
        }
        return res;
    }
};