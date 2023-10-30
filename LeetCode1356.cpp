class Solution
{
public:
    static int no_of_bits(int n)
    {
        int weight = 0;
        int mask = 1;
        while (n)
        {
            if ((n & mask) > 0)
            {
                weight++;
                n ^= mask;
            }
            mask <<= 1;
        }
        return weight;
    }
    static bool compare(int a, int b)
    {
        if (no_of_bits(a) == no_of_bits(b))
            return a < b;
        return no_of_bits(a) < no_of_bits(b);
    }
    vector<int> sortByBits(vector<int> &arr)
    {
        sort(arr.begin(), arr.end(), compare);
        return arr;
    }
};