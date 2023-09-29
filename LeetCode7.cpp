class Solution
{
public:
    int reverse(int x)
    {
        string s=to_string(x);
        std::reverse(s.begin(),s.end());
        long long int i=stoll(s);
        if(x<0) i*=-1;
        if(i<INT_MIN or i>INT_MAX) return 0;
        else return i;
    }
};
