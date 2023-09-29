class Solution
{
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {
        int starting=-1;
        int ending=-1;
        if(nums.empty())
        {
            return {starting,ending};
        }
        int it=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        int it2=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        if(it!=it2) return {it2,it-1};
        else return {starting,ending};
    }
};
