class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n=nums.size();
        int k=-2000000000;
        stack<int>s;
        for(int i=n-1;i>=0;i--)
        {
            if(nums[i]<k) return true;
            while(!s.empty() and s.top()<nums[i]) 
            {
                k=s.top();
                s.pop();
            }
            s.push(nums[i]);
        }
        return false;
    }
};