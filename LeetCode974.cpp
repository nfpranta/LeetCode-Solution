class Solution
{
public:
    int subarraysDivByK(vector<int> &nums, int k)
    {
        int n = nums.size();
        int cnt = 0;
        int sum = 0;
        unordered_map<int, int> m;
        m[0] = 1;
        for (int i = 0; i < n; i++)
        {
            sum = (sum + nums[i]) % k;
            if (sum < 0)
                sum += k;
            cnt += m[sum];
            m[sum]++;
        }
        return cnt;
    }
};