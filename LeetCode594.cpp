class Solution
{
public:
    int findLHS(vector<int>& nums)
    {
        int mx=0;
        map<int,int>m;
        for(int i=0; i<nums.size(); i++)
        {
            m[nums[i]]++;
        }
        sort(nums.begin(),nums.end());
        for(int i=1; i<nums.size(); i++)
        {
            if(abs(nums[i]-nums[i-1])==1)
            {
                mx=max(mx,m[nums[i]]+m[nums[i-1]]);
            }
        }
        return mx;
    }
};
