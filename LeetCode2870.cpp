class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int,int>m;
        int n=nums.size();
        int cnt=0;
        bool flag=false;
        for(int i=0;i<n;i++) 
        {
            m[nums[i]]++;
        }
        for(auto it:m)
        {
            if(it.second==1)
            {
                flag=true;
                break;
            }
        }
        if(flag) return -1;
        else 
        {
            for(auto it:m)
            {
                if(it.second%3==0) 
                {
                    cnt+=(it.second)/3;
                }
                else if(it.second%3==1)
                {
                    cnt+=(it.second/3)+1;
                }
                else if(it.second%3==2)
                {
                    cnt+=(it.second/3)+1;
                }
            }
            return cnt;
        }
    }
};