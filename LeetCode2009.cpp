class Solution {
public:
    int minOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>v(nums.begin(),unique(nums.begin(),nums.end()));
        int ans=INT_MAX;
        for(int i=0;i<v.size();i++)
        {
            int s=v[i];
            int e=s+n-1;
            int id=upper_bound(v.begin(),v.end(),e)-v.begin();
            ans=min(ans,n-(id-i));//keeping i constant, look out the number of characters which need to be changed
        }
        return ans;
    }
};
