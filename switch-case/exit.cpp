#include <iostream>
using namespace std;

int main()
{
    int choice;
    while (1) // always true
    {

        cout << "Menu" << endl;
        cout << "Option 1" << endl;
        cout << "Option 2" << endl;
        cout << "Exit" << endl;
        cout << "Enter your choice" << endl;

        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Pizza" << endl
                 << endl;
            break;

        case 2:
            cout << "Burger" << endl
                 << endl;
            break;
        case 3:
            cout << "Exitting......" << endl
                 << endl;
            exit(0);

        default:
            cout << "Enter a valid number" << endl
                 << endl;
        }
    }
}