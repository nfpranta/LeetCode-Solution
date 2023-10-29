class Solution
{
public:
    long long minSum(vector<int> &nums1, vector<int> &nums2)
    {
        long long sum1 = 0;
        long long sum2 = 0;
        int n = nums1.size();
        int m = nums2.size();
        int cnt1 = 0;
        int cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums1[i] == 0)
                cnt1++;
            sum1 += nums1[i];
        }
        for (int i = 0; i < m; i++)
        {
            if (nums2[i] == 0)
                cnt2++;
            sum2 += nums2[i];
        }
        if (sum1 == sum2 and cnt1 == 0 and cnt2 == 0)
            return sum1;
        else if (cnt1 == 0 and cnt2 == 0)
            return -1;
        bool flag = false;
        if (sum2 + cnt2 > sum1 + cnt1)
            flag = true;
        if (cnt1 > 0 and cnt2 > 0)
        {
            if (flag)
            {
                sum2 += cnt2;
                if (cnt1 > 0)
                    sum1 += cnt1 - 1;
                if (sum2 > sum1 and cnt1 > 0)
                    return sum2;
                return -1;
            }
            else
            {
                sum1 += cnt1;
                if (cnt2 > 0)
                    sum2 += cnt2 - 1;
                if (sum1 > sum2 and cnt2 > 0)
                    return sum1;
                return -1;
            }
        }
        else if (cnt1 == 0)
        {
            if (sum1 >= sum2 + cnt2)
                return sum1;
            return -1;
        }
        else if (cnt2 == 0)
        {
            if (sum2 >= sum1 + cnt1)
                return sum2;
            return -1;
        }
        return -1;
    }
};