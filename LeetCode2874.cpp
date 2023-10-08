class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();
        int mx1=nums[0];
        int mx2[n+4];
        fill(mx2,mx2+n+2,-1);
        mx2[n-1]=nums[n-1];
        long long ans=0;
        for(int i=n-2;i>=0;i--) 
        {
            mx2[i]=max(mx2[i+1],nums[i]);
        }
        for(int i=1;i<n-1;i++)
        {
            mx1=max(mx1,nums[i-1]);
            if(nums[i]<mx1)
            {
                ans=max(ans,(long long int)(mx1-nums[i])*mx2[i+1]);
            }
        }
        return ans;
    }
};