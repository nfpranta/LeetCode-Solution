class Solution
{
public:
    int findMaxLength(vector<int> &nums)
    {
        int longest_subarray = 0;
        int sum = 0;
        unordered_map<int, int> m;
        m[0] = -1;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i])
                sum++;
            else
                sum--;
            if (m.find(sum) != m.end())
            {
                longest_subarray = max(longest_subarray, i - m[sum]);
            }
            else
                m[sum] = i;
        }
        return longest_subarray;
    }
};