#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class solution
{

public:
    void reverseWords(vector<char> &s)
    {
        reverse(s.begin(), s.end());
        int n = s.size();
        int start = 0;

        for (int i = 0; i <= n; i++)
        {
            if (i == n || s[i] == ' ')
            {
                reverse(s.begin() + start, s.begin() + i);
                start = i + 1;
            }
        }
    }
};
int main()
{

    solution s;
    string input;
    cout << "Enter the string " << endl;
    getline(cin, input);
    vector<char> Charvector(input.begin(), input.end());
    s.reverseWords(Charvector);
    for (char c : Charvector)
    {
        cout << c;
    }

    cout << endl;
    return 0;
}