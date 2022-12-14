class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit =0 , mins = INT_MAX;
        
        for (int i =0; i<prices.size() ; i++){
            
            mins = min (mins, prices[i]);
            profit = max (profit, prices[i]-mins);
        }
        
        return profit;
    }
};