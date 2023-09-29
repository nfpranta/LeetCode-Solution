class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cnt=0;
        vector<int>temp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=val){
                 cnt++;
            }
        }
        for(int i=cnt;i<n;i++)
        {
            if(nums[i]!=val)
            {
                temp.push_back(nums[i]);
            }
        }
        int ind=0;
        int shift=temp.size();
        for(int i=0;i<n and ind<shift;i++)
        {
            if(nums[i]==val)
            {
                nums[i]=temp[ind];
                ind++;
            }
        }
        return cnt;
    }
};
