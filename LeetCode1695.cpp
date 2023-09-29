class Solution
{
public:
    int maximumUniqueSubarray(vector<int>& nums)
    {
        int right=0;
        int left=0;
        int n=nums.size();
        set<int>s;
        int mx=0;
        int sum=0;
        while(left<n and right<n)
        {
            while(right<n and s.count(nums[right])==0)
            {
                s.insert(nums[right]);
                sum+=nums[right];
                mx=max(mx,sum);
                right++;

            }
            while(right<n and s.count(nums[right]))
            {
                sum=sum-nums[left];
                s.erase(nums[left]);
                left++;
            }
        }
        return mx;
    }
};
