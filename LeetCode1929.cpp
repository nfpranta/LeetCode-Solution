class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>v;
        int sz=nums.size();
        for(int i=0;i<2*sz;i++)
        {
            v.push_back(nums[i%sz]);
        }
        return v;
    }
};
