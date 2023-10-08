class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
        int id=-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(nums[mid]==target)
            {
                id=mid;
                break;
            }
            else if(nums[mid]>=nums[l] and target>nums[mid])
            {
                l=mid+1;
            }
            else if(nums[mid]>=nums[l] and target>=nums[l])
            {
                r=mid-1;
            }
            else if(nums[mid]>=nums[l])
            {
                l=mid+1;
            }
             else if(nums[mid]<=nums[l] and target<nums[mid])
            {
                r=mid-1;
            }

            else if(nums[mid]<=nums[l] and target>nums[mid] and target<=nums[r])
            {
                l=mid+1;
            }
            else if(nums[mid]<=nums[l] )
            {
                r=mid-1;
            }

        }
        return id;
    }
};
