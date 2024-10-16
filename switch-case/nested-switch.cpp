#include <iostream>
using namespace std;

int main()
{

    char ch = 'a';
    int num = 2;
    switch (num)
    {
    case 1:
        cout << "First" << endl;
        break;
    case 2:
        switch (ch)
        {
        case 'a':
            cout << "a" << endl;
            break;
        }

        break; // to come out of outer switch otherwise we wont get out of the outer switch and default case would get printed as well.

    default:
        cout << "Default case" << endl;
        break;
    }
} 