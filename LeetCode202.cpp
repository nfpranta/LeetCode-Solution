class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int>m;
        m[n]++;
        while(m[n]!=2 and n!=1){
            int sum=0;
            while(n){
                int rem=n%10;
                sum+=rem*rem;
                n/=10;
            }
            m[sum]++;
            n=sum;
        }
        return m[1]==1;
    }
};
