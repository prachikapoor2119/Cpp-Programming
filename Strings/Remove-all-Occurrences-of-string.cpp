#include <iostream>
using namespace std;

class Solution
{
public:
    string removeOccurrences(string s, string part)
    {
        while (s.length() != 0 && s.find(part) < s.length())
        {
            s.erase(s.find(part), part.length());
        }

        return s;
    }
};

int main()
{
    Solution o;
    string s;
    string part;
    cout << "enter string " << endl;
    cout << "Enter part " << endl;
    getline(cin, s);
    getline(cin, part);
    s = o.removeOccurrences(s, part);
    cout << s << endl;
}