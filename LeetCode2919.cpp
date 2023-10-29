class Solution
{
public:
    long long minIncrementOperations(vector<int> &nums, int k)
    {
        int n = nums.size();
        long long ans = 0;
        for (int i = 1; i < n - 1; i++)
        {
            int mx = max(nums[i], max(nums[i + 1], nums[i - 1]));
            if (mx < k)
            {
                ans += k - mx;
                nums[i + 1] += k - mx;
                nums[i] += k - mx;
                nums[i - 1] += k - mx;
            }
        }
        return ans;
    }
};
