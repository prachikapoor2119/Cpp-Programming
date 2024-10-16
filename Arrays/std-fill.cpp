#include <iostream>
#include <algorithm> // std::fill is a part of this header
using namespace std;

int main()
{
    int arr[10];
    fill(arr, arr + 10, 24); // to initialise a complete array with 24(value)

    // to print the array

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}