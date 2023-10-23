class Solution {
public:
    int solve(vector<int>&nums,int k)
    {
        vector<int>left,right;
        int n=nums.size();
        left=vector(k,-1);
        right=vector(n-k+1,-1);
        int curMn=INT_MAX;
        for(int i=k-1;i>=0;i--)
        {
            curMn=min(curMn,nums[i]);
            left[i]=curMn;
        }
        curMn=INT_MAX;
            for(int i=k;i<n;i++)
        {
            curMn=min(curMn,nums[i]);
            right[i-k]=curMn;
        }
        int ans=0;
        for(int i=0;i<right.size();i++)
        {
            curMn=right[i];
            int idx=lower_bound(left.begin(),left.end(),curMn)-left.begin();
            int size=(k+i)-idx+1;
            ans=max(ans,size*curMn);
        }
        return ans;
    }
    int maximumScore(vector<int>& nums, int k) {
        int n=nums.size();
        int right=solve(nums,k);
        reverse(nums.begin(),nums.end());
        int left=solve(nums,n-k-1);
        return max(left,right);
    }
};
