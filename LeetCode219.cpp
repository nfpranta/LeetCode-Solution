class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,vector<int>>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]].push_back(i);
            if(m[nums[i]].size()>=2)
            {
                if(m[nums[i]][m[nums[i]].size()-1]-m[nums[i]][m[nums[i]].size()-2]<=k) return true;
            }
        }
        return false;
    }
};
