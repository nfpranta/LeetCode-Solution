class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int cnt=0;
        int cnt1=0;
        int temp=left;
        int tmp=right;
        while(left)
        {
            left>>=1;
            cnt++;
        }
        while(right)
        {
            right>>=1;
            cnt1++;
        }
        if(cnt1!=cnt) return 0;
        int val=temp;
        int i=val;
        int n=tmp;
        while(i<=n and i!=2147483647)
        {
           val&=i;
           i++;
        }
        return val;
    }
};