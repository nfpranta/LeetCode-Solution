class Solution {
public:
    int maxSubarrays(vector<int>& nums) {
        int n = nums.size();
        int sub=0;
        int cnt=0;
        int anD=nums[0];
        for(auto it:nums)
        {
            anD&=it;
        }
        if(anD>0) return 1;
        for(auto it:nums) 
        {
            if(sub)
            {
                sub&=it;
            }
            else 
            {
                sub=it;
                cnt++;
            }
        }
        if(sub!=0) return cnt-1;//Greedy approach (take elements till theirs bitwise and == 0, then start a new subarray) with edge case (if the last subarray doesn't have 0 score, merge it with previous)
        return cnt;
    }
};
