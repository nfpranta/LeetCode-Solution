class Solution
{
public:
    int removeDuplicates(vector<int>& nums)
    {
        int right=1;
        int left=1;
        int n=nums.size();
        if(!n) return 0;
        while(right<n)
        {
            if(nums[right]!=nums[right-1])
            {
                nums[left]=nums[right];
                left++;
                right++;
            }
            else right++;
        }
        return left;
    }
};
