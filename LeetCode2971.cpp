class Solution
{
public:
    long long largestPerimeter(vector<int> &nums)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        // vector<long> prefix(n, 0);
        // prefix[0] = nums[0];
        // for (int i = 1; i < n; i++)
        // {
        //     prefix[i] = prefix[i - 1] + nums[i];
        // }
        // int ind = -1;
        // for (int i = n - 1; i >= 1; i--)
        // {
        //     if (prefix[i - 1] > nums[i])
        //     {
        //         ind = i;
        //         break;
        //     }
        // }
        // if (ind == -1) return -1;
        // return prefix[ind];
        long ans = -1;
        long sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (sum > nums[i])
            {
                ans = sum + nums[i];
            }
            sum += nums[i];
        }
        return ans;
    }
};