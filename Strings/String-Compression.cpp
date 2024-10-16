#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int compress(vector<char> &chars)
    {

        int n = chars.size();
        int result = 0;

        if (n == 1)
        {
            return 1;
        }
        char ch;
        for (int i = 0; i < n;)
        {
            int count = 0;
            ch = chars[i];
            while (i < n && chars[i] == ch)
            {
                count++;
                i++;
            }

            chars[result++] = ch;
            if (count > 1)
            {
                for (char digit : to_string(count))
                {
                    chars[result++] = digit;
                }
            }
        }

        return result;
    }
};

int main()
{
}

// or

// Time complexity= O(n)   n = length of chars vector
// Space complexity = o(1) = no extra space taken

#include <iostream>
using namespace std;
class Solution
{
public:
    int compress(vector<char> &chars)
    {
        int i = 0; // for traversing the entire vector..
        int ansIndex = 0;
        int n = chars.size();
        while (i < n)
        {
            int count = 1;
            int j = i + 1;
            while (j < n && chars[i] == chars[j])
            {
                j++;
                count++;
            }
            // yaha kab aaoge
            // ya to vector poora traverse krdiya
            // ya fer new/Different character encounter kiya hai

            // old char store krlo
            chars[ansIndex++] = chars[i];
            if (count > 1)
            {
                // converting counting into single digit and saving in answer(chars)

                for (char digit : to_string(count))
                {
                    chars[ansIndex++] = digit;
                }
            }
            // moving to new/different character..
            i = j;
        }
        return ansIndex;
    }
};
int main()
{
}


// as strings

// Yes, in the context of your code, vector<char> &chars is a reference to a vector of characters.This is typically used to represent a character array or a string - like structure in C++.

// while
// vector<char> is not a string in the traditional sense, it serves a similar purpose when dealing with sequences of characters, especially in the context of compression or transformation tasks.





// as character arrays

//Yes, vector<char> &chars is a vector of characters, which can effectively function like a character array vector.


// Dynamic Size : Unlike traditional character arrays, vector<char> can grow or shrink in size dynamically.You can add or remove characters as needed.
