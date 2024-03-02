class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        int l = 0, r = nums.size() - 1;
        int k = r;
        vector<int> result(r + 1);
        while (l <= r)
        {
            if (abs(nums[l]) < abs(nums[r]))
            {
                result[k] = (nums[r] * nums[r]);
                r--;
                k--;
            }
            else
            {
                result[k] = (nums[l] * nums[l]);
                l++;
                k--;
            }
        }
        return result;
    }
};
