class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        int n = nums.size();
        int pre_sum = 0;
        int sum = 0;
        int ans = 0;
        unordered_map<int, int> m;
        m[0] = 1;
        for (int i = 0; i < n; i++)
        {
            pre_sum += nums[i];
            ans += m[pre_sum - k];
            m[pre_sum]++;
        }
        return ans;
    }
};