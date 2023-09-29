class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index=0;
        int n=nums.size();
        map<int,int>a;
        for(int i=0;i<n;i++)
        {
           if(a[nums[i]]<2)
           {
               nums[index++]=nums[i];
               a[nums[i]]++;
           }
        }
        return index;
    }
};
