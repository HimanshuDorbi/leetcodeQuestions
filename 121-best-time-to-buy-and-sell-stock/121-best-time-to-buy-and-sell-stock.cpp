class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
         int currentMin = INT_MAX;
         int result=0;

    for (int i = 0; i < prices.size(); i++) {
      
        currentMin = min(currentMin, prices[i]);
          result = max(result, prices[i] - currentMin);
    }
        return result;
    }
};