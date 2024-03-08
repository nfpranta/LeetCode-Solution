class Solution
{
public:
    int maxFrequencyElements(vector<int> &nums)
    {
        unordered_map<int, int> m;
        int n = nums.size();
        int mx = 0;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            m[nums[i]]++;
            mx = max(mx, m[nums[i]]);
        }
        for (auto it : m)
        {
            if (it.second == mx)
            {
                sum += mx;
            }
        }
        return sum;
    }
};