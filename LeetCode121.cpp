class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn=INT_MAX;
        int mx=0;
        int n=prices.size();
        for(int i=0;i<n;i++)
        {
            mn=min(mn,prices[i]);
            int profit=prices[i]-mn;
            mx=max(mx,profit);
        }
        return mx;
    }
};
