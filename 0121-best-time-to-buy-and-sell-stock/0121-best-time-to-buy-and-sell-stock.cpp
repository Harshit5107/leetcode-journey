class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int minimum=prices[0]; 
        int profit=0;

        for (int i = 1; i <prices.size(); i++)
        {
            int sell=prices[i]-minimum;
            profit=max(sell,profit);
            minimum=min(minimum,prices[i]);
        }
        return profit;
        
    }
};