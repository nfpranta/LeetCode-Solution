class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        if(n==0) return ans;
        sort(nums.begin(),nums.end());
        int mx=1;
        vector<int>dp(n+1,1);
        for(int i=0;i<n;i++)
        {
            for(int j=i-1;j>=0;j--)
            {
                if(nums[i]%nums[j]==0)
                {
                    dp[i]=max(dp[i],dp[j]+1);
                    mx=max(mx,dp[i]);
                }
            }
        }
        int prev=-1;
        for(int i=n-1;i>=0;i--)
        {
            if(dp[i]==mx and (prev==-1 or prev%nums[i]==0) )
            {
                mx--;
                ans.push_back(nums[i]);
                prev=nums[i];
            }
        }
        return ans;
    }
};