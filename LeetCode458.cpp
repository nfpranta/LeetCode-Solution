class Solution
{
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest)
    {
        return ceil(log2(buckets) / log2(int(minutesToTest / minutesToDie) + 1));
    } /*
 The total test time is timeTest. It needs time timeDetect to detect whether the choosen bucket is poisonous.

 One pig can eat at most int(timeTest/timeDetect) buckets until the detecting result outcomes, and can detect int(timeTest/timeDetect)+1 buckets. Let BBB=int(timeTest/timeDetect)+1

 There are B choices for each pig. How many choices for x pigs?
 B^x!
 Find the mimial integer x such that Bx≥buckets
   x≥log⁡B(buckets)=log⁡2(buckets)/log⁡2(B)
 ​*/
};