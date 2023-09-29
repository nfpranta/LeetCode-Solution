class Solution
{
public:
    int mySqrt(int x)
    {
        if(x==0 or x==1) return x;
        int low=1,high=x;
        while(low<=high)
        {
            int mid=low+(high-mid)/2;
            if(mid>x/mid)
            {
                high=mid-1;
            }
            else low=mid+1;
        }
        return low-1;
    }
};
