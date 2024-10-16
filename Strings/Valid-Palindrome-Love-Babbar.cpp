#include <iostream>
using namespace std;

class solution
{
public:
    bool ValidCharacters(char ch)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        {
            return true;
        }

        return false;
    }

    char tolower(char ch)
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            return ch - 'A' + 'a'; // Convert to lowercase
        }
        return ch; // Return as is if it's already lowercase or a digit
    }

    bool CheckPalindrome(string a)
    {
        int start = 0;
        int end = a.length() - 1;
        while (start <= end)
        {
            if (a[start] != a[end])
            {
                return false;
            }

            start++;
            end--;
        }

        return true;
    }

    bool ifPalindrome(string s)
    {
        // faltu characters hatado
        int n = s.size();
        string temp;
        for (int i = 0; i < n; i++)
        {
            if (ValidCharacters(s[i]))
            {
                temp.push_back(s[i]);
            }
        }
        // lower case me krdo

        int p = temp.length();
        for (int j = 0; j < p; j++)
        {
            temp[j] = tolower(temp[j]);
        }

        // Check Palindrome

        return CheckPalindrome(temp);
    }
};

int main()
{

    solution s;
    string input;
    cout << "Enter your string:";
    // cin.ignore();
    getline(cin, input);

    if (s.ifPalindrome(input))
    {
        cout << "true" << endl;
    }

    else
    {
        cout << "false" << endl;
    }

    return 0;
}
