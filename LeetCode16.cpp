class Solution
{
public:
    int threeSumClosest(vector<int>& nums, int target)
    {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=10000;
        int mn=ans;
        for(int i=0; i<n-1; i++)
        {
            int left=i+1;
            int right=n-1;
            while(left<right)
            {
                int sum=nums[i]+nums[left]+nums[right];
                if(sum==target)
                {
                    return sum;
                }
                else if(sum<target)
                {
                    left++;
                }
                else right--;
                if(abs(sum-target)<mn)
                {
                    ans=sum;
                    mn=abs(sum-target);
                }
            }
        }
        return ans;
    }
};
