class Solution
{
public:
    bool isPossible(int k,int h,vector<int>piles)
    {
        int cnt=0;
        for(int i=0; i<piles.size(); i++)
        {
            cnt+=(piles[i]+k-1)/k;
        }
        return cnt<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h)
    {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int ans=1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(isPossible(mid,h,piles))
            {
                ans=mid;//since we are looking for min k within hour h
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    }
};
