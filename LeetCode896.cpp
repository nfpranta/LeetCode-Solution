class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        if(n<=2) return true;
        bool great=false;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]!=nums[i+1])
            {
                great=nums[i+1]>nums[i];
                break;
            }
        }
        bool ok=false;
        for(int i=0;i<n-1;i++)
        {
           if(great==false and nums[i+1]>nums[i]) 
           {
               ok=true;
               break;
           }
           else if(great==true and nums[i+1]<nums[i])
           {
               ok=true;
               break;
           }
        }
        return !ok;
    }
};