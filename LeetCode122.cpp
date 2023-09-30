class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn=prices[0];
        int n=prices.size();
        int profit=0;
        for(int i=1;i<n;i++)
        {
            if(prices[i]<mn)
            {
                mn=prices[i];
            }
            else 
            {
               profit+=prices[i]-mn;
               mn=prices[i];
            }
        }
        return profit;
    }
};