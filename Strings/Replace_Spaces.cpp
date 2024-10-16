// Time complexity= O(n);
// Space complexity= O(n);
// n= length of string;

#include <iostream>
#include <string.h>
using namespace std;

string replaceSpaces(string &str)
{

    string temp;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }

        else
        {
            temp.push_back(str[i]);
        }
    }

    return temp;
}

int main()
{
    string s;
    // string input;
    int n = s.length();
    getline(cin,s);
    string str = replaceSpaces(s);
    cout << str << endl;
    return 0;
}


