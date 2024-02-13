class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        // vector<int> ans(3, 0);
        // int n = nums.size();
        // for (int i = 0; i < n; i++)
        // {
        //     ans[nums[i]]++;
        // }
        // for (int i = 0; i < n; i++)
        // {
        //     if (ans[0] > 0)
        //     {
        //         nums[i] = 0;
        //         ans[0]--;
        //     }
        //     else if (ans[1] > 0)
        //     {
        //         nums[i] = 1;
        //         ans[1]--;
        //     }
        //     else
        //     {
        //         nums[i] = 2;
        //         ans[2]--;
        //     }
        // }
        int low = 0, mid = 0, high = nums.size() - 1;
        while (mid <= high)
        {
            if (nums[mid] == 0)
            {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if (nums[mid] == 1)
            {
                mid++;
            }
            else
            {
                swap(nums[mid], nums[high]);
                high--; // 2 might be swapped by 2, so mid intact
            }
        }
    }
};