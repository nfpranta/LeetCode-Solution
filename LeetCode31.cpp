//https://www.youtube.com/watch?v=6qXO72FkqwM&t=1018s
class Solution
{
    public:
        void nextPermutation(vector<int> &nums)
        {
            int length = nums.size();
            if (length == 1) return;
            int lastPeakElement = -1;
            for (int i = 1; i < length; i++)
            {
                if (nums[i] > nums[i - 1])
                {
                    lastPeakElement = i;
                }
            }
            if (lastPeakElement == -1)	//check for desc order
            {
                for (int i = 0; i < length / 2; i++)
                {
                    swap(nums[i], nums[length - i - 1]);
                }
                return;
            }
            int mn = nums[lastPeakElement];
            int index = lastPeakElement;	//check for value in range of nums[peak-1] and nums[peak] on right side
            for (int i = index; i < length; i++)
            {
                if (nums[i] > nums[lastPeakElement - 1] and nums[i] < nums[index])
                {
                    index = i;
                }
            }
            swap(nums[lastPeakElement - 1], nums[index]);
            sort(nums.begin() + lastPeakElement, nums.end());
        }
};
