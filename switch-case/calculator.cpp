#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    char operation;
    cout << "Enter first digit:" << endl;
    cin >> a;
    cout << "Enter Second digit:" << endl;
    cin >> b;
    cout << "Enter operation to be performed: " << endl;
    cin >> operation;
     
    switch (operation)
    {
    case '/':
    {
        cout << a / b << endl;
        break;
    } // can put it in blocks(brackets) as well wont make a difference..

    case '+':
        cout << a + b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '%':
        cout << a % b << endl;
        break;

    default:
        cout << "Enter a valid operation" << endl;
    }
}