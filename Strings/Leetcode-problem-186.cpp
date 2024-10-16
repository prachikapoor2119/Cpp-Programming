#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class solution
{

public:
    void reverseWords(vector<char> &str)
    {

        int n = str.size();
        int start = 0;

        for (int i = 0; i <= n; i++)
        {
            if (i == n || str[i] == ' ')
            {
                reverse(str.begin() + start, str.begin() + i);
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
    vector<char> CharVector(input.begin(), input.end());

    s.reverseWords(CharVector);

    for (char c : CharVector)
    {
        cout << c;
    }

    cout << endl;
    return 0;
}