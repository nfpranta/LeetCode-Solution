class Solution
{
public:
    int maxArea(vector<int>& height)
    {
        int left=0;
        int right=height.size()-1;
        int mx=0;
        while(left<right)
        {
            int minHeight=min(height[left],height[right]);
            int area=(right-left)*minHeight;
            mx=max(mx,area);
            if(height[left]<=height[right]) left++;
            else right--;
        }
        return mx;

    }
};
