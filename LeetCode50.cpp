class Solution
{
public:
    double myPow(double x, int n)
    {
        double r = 1;
        bool neg=false;
        if(n<0) neg=true;
        while(n)
        {
            if(n&1) r =(double)(r*x);
            x = (double)(x*x);
            n/=2;
        }
        if(neg) return 1.0/r;
        return r;
    }
};
