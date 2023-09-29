class Solution
{
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>ans;
        for(int i=0; i<n; i++)
        {
            if(i and nums[i]==nums[i-1]) continue;
            int left=i+1;
            int right=n-1;
            while(left<right)
            {
                if(nums[i]+nums[left]+nums[right]>0) right--;
                else if(nums[i]+nums[left]+nums[right]<0) left++;
                else
                {
                    ans.push_back({nums[i],nums[left],nums[right]});
                    int a=nums[left];
                    int b=nums[right];
                    while(left<right and nums[left]==a) left++;
                    while(left<right and nums[right]==b) right--;

                }
            }
        }
        return ans;
    }
};
