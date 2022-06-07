class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
     
      int i,j,m=accounts.size(),n=accounts[0].size(),sum2=0;
        for(i=0;i<m;i++)
        {
            int sum=0;
            for(j=0;j<n;j++)
            {
                sum+=accounts[i][j];
            }
            sum2=max(sum2,sum);   
        }
        return sum2;
    }
        
        
};