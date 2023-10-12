/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int s=0;
        int e=mountainArr.length()-1;
        int peakInd;
        while(s<e)
        {
            int mid=(s+e)/2;
            if(mountainArr.get(mid)<mountainArr.get(mid+1))
            {
              s=mid+1;
              peakInd=s;
            }
            else e=mid;
        }
        int left=-1,right=-1;
        s=0;
        e=peakInd;
        while(s<=e)
        {
            int mid=(s+e)/2;
            int val=mountainArr.get(mid);
            if(val==target)
            {
                left=mid;
            }
            if(val<target)
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
        if(left!=-1 and mountainArr.get(left)==target) return left;
        s=peakInd+1;
        e=mountainArr.length()-1;
        while(s<=e)
        {
            int mid=(s+e)/2;
            int val=mountainArr.get(mid);
            if(val==target)
            {
                right=mid;
            }
            if(target<val)
            {
                s=mid+1;
            }
            else e=mid-1;
        }
        return right;
    }
};
