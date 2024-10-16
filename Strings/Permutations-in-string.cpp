// Time complexity = O[m] + O[n] == O[2m] + O[2n];
// m= s1 length
// n= s2 length
// space complexity = O[1] = fixed = constant space;
#include <iostream>
using namespace std;

class Solution
{
public:
    bool checkEqual(int a[], int b[])
    {
        for (int i = 0; i < 26; i++)
        {
            if (a[i] != b[i])
            {
                return 0;
            }
        }
        return 1;
    }

    bool checkInclusion(string s1, string s2)
    {
        // character count array

        int count[26] = {0};
        for (int i = 0; i < s1.length(); i++)
        {
            char ch = s1[i];
            int number = 0;
            number = ch - 'a';
            count[number]++;
        }

        // traverse s2 string in window of size s1 length and compare

        int windowsize = s1.length();
        int count2[26] = {0};
        int i = 0;

        // running for first window
        while (i < windowsize && s2.length())
        {
            int index = s2[i] - 'a';
            count2[index]++;
            i++;
        }

        if (checkEqual(count, count2))
        {
            return 1;
        }

        // aage window process karo
        while (i < s2.length())
        {
            char newchar = s2[i];
            int index2 = newchar - 'a';
            count2[index2]++;

            char oldchar = s2[i - windowsize];
            index2 = oldchar - 'a';
            count2[index2]--;
            i++;

            if (checkEqual(count, count2))
            {
                return 1;
            }
        }

        return 0;
    }
};

int main()
{
}