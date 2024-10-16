#include <iostream>
using namespace std;

int main()
{
    // declare
    int number[15]; // size 15 that means index 0 to 14 not 15

    // accessing an array
    cout << "Value at 14 index is " << number[14] << endl;
    cout << "Value at 20 in index is " << number[20] << endl;

    int second[3] = {5, 7, 11};
    cout << "Value at 2nd index is " << second[2] << endl;

    int third[15] = {2, 7};
    int n = 15;
    cout << "Printing the array third" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << third[i] << " ";
    }

    cout << endl;

    // initialising all locations with 0
    int fourth[10] = {0};
    int m = 10;
    cout << "Printing the array fourth" << endl;
    for (int i = 0; i < m; i++)
    {
        cout << fourth[i] << " ";
    }

    cout << endl;

    // initialising all locations with 1
    int fifth[10] = {1};
    m = 10;
    cout << "Printing the array fifth" << endl;
    for (int i = 0; i < m; i++)
    {
        cout << fifth[i] << " ";
    } // cant be done this way need to use std::fill

    return 0;
}