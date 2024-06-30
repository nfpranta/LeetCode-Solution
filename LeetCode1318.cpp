class Solution
{
    public:
        int checkOdd(int n)
        {
            return (n & 1);
        }
    int minFlips(int a, int b, int c)
    {
        int flip = 0;
        while (a > 0 or b > 0 or c > 0)
        {
            if (c & 1)
            {
                if (checkOdd(a) == 0 and checkOdd(b) == 0)
                {
                    flip++;
                }
            }
            else
            {
                if (checkOdd(a) == 1 and checkOdd(b) == 1)
                {
                    flip += 2;
                }
                else if (checkOdd(a) == 1 or checkOdd(b) == 1)
                {
                    flip += 1;
                }
            }
            a >>= 1;
            b >>= 1;
            c >>= 1;
        }
        return flip;
    }
};
