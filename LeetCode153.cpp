class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0;
        int r=nums.size()-1;
        int mn=6000;
        while(l<=r)
        {
            int mid=(l+r)/2;
            mn=min(mn,nums[mid]);
            if(nums[mid]>=nums[l])
            {
                mn=min(mn,nums[l]);
                l=mid+1;
            }
            else r=mid-1;
        }
        return mn;
    }
};
