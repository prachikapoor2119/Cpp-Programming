#include <iostream>
using namespace std;

char MaxOccCharacter(string s)
{
    int arr[26] = {0};

    // create an array of count of characters

    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    // find maximum occ character
    int maxi = -1;
    int ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }

    return 'a' + ans;
}

int main()
{

    string s;
    cout << "Enter your string " << endl;
    cin >> s;
    char ch = MaxOccCharacter(s);
    cout << ch << endl;
}