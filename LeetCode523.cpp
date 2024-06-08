class Solution
{
public:
    bool checkSubarraySum(vector<int> &nums, int k)
    {
        int n = nums.size();
        unordered_map<int, int> a;
        a[0] = -1;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            int rem = sum % k;
            if (a.find(sum % k) != a.end())
            {
                if (i - a[rem] > 1)
                    return true;
            }
            else
                a[rem] = i;
        }
        return false;
    }
};