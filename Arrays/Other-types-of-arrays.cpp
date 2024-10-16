#include <iostream>
using namespace std;

int main()
{

    double firstDouble[15] = {1.1234567895, 1.1, 8.6, 825.5};
    float firstFloat[15] = {1.1234567895, 1.2, 1.6, 8.999};
    bool firstBool[15] = {1, true, false, true};

    for (int i = 0; i < 15; i++)
    {
        cout << firstDouble[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < 15; i++)
    {
        cout << firstFloat[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < 15; i++)
    {
        cout << firstBool[i] << " ";
    }

    cout << endl;
    return 0;
}