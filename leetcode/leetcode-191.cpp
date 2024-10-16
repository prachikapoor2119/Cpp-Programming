class Solution
{
public:
    int hammingWeight(int n)
    {

        int count = 0;
        while (n != 0)
        {
            if (n & 1) // checking last bits and adding all 1 bits using and operation and right shifting it to check next last bit..
            {
                count++;
            }

            n = n >> 1;
        }

        return count;
    }
};