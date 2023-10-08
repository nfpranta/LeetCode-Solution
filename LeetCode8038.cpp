class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int cnt=0;
        int n=nums.size();
        map<int,int>m;
        int i=n-1;
        for(;i>=0;i--)
        {
            if(nums[i]<=k) 
            {
                m[nums[i]]++;
            }
            cnt++;
            if(m.size()==k) break;
        }
        return cnt;
    }
};