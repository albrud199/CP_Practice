class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        int t=0;
        int l=0;
        int b = matrix.size()-1;
        int r = matrix[0].size()-1;

        int dir = 0;
        int i;
        vector <int> ans;

        while (t<=b && l<=r)
        {
            if (dir == 0)
            {
                for(i=l ; i<=r ; i++)                
                ans.push_back(matrix[t][i]);
                t++;
            }

            else if (dir == 1)
            {
                for(i=t ; i<=b ; i++)                
                ans.push_back(matrix[i][r]);
                r--;
            }

            else if (dir == 2)
            {
                for(i=r ; i>=l ; i--)                
                ans.push_back(matrix[b][i]);
                b--;
            } 

            else if (dir == 3)
            {
                for(i=b ; i>=t ; i--)                
                ans.push_back(matrix[i][l]);
                l++;
            }

             dir = (dir + 1) % 4;
        }
       
        return ans;

    }

    
};
