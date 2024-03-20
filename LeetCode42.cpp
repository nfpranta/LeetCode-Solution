//https://www.youtube.com/watch?v=ZI2z5pq0TqA&t=1050s
class Solution
{
    public:
        int trap(vector<int> &height)
        {
            int l = 0;
            int r = height.size() - 1;
            int maxl = height[l];
            int maxr = height[r];
            int sum = 0;
            while (l <= r)
            {
                if (maxl <= maxr)
                {
                    sum += (max(0, maxl - height[l]));
                    maxl = max(maxl, height[l]);
                    l++;
                }
                else
                {
                    sum += max(0, maxr - height[r]);
                    maxr = max(maxr, height[r]);
                    r--;
                }
            }
            return sum;
        }
};
