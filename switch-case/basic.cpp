#include <iostream>
using namespace std;

int main()
{
    int num = 2;

    cout << "Enter the value of num" << endl;
    cin >> num;

    switch (num)
    {
    case 1:
        cout << "First" << endl;
        break;
    case 2:
        cout << "Second" << endl;
        break;
    case 3:
        cout << "Third" << endl;
        break;
    case 4:
        cout << "Four" << endl;
        break;
    case 5:
        cout << "Fifth" << endl;
        break;
    case 6:
        cout << "Six" << endl;
        break;
    case 7:
        cout << "Seven" << endl;
        break;
    case 8:
        cout << "Eight" << endl;
        break;
    case 9:
        cout << "Nine" << endl;
        break;

    default:
        cout << "Default Case" << endl;
        break;
    }
}