#include <iostream>
using namespace std;

int main()
{

    char ch;
    cout << "enter the character" << endl;
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "ch is LOWERCASE" << endl;
    }

    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "ch is UPPERCASE" << endl;
    }

    else if (ch >= '0' && ch <= '9')
    {
        cout << "ch is digit" << endl;
    }
}