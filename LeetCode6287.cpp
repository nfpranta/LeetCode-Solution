class Solution
{
public:
    string categorizeBox(long long int length, long long int width, long long int height, int mass)
    {
        long long int volume = length * width * height;
        bool isBulky = length >= 10000LL || width >= 10000LL || height >= 10000LL || volume >= 1000000000LL;
        bool isHeavy = mass >= 100;
        if (isBulky && isHeavy)
        {
            return "Both";
        }
        else if (isBulky)
        {
            return "Bulky";
        }
        else if (isHeavy)
        {
            return "Heavy";
        }
        else
        {
            return "Neither";
        }
    }
};