#include <iostream>
using namespace std;

void printArray(int arr[], int size) // can only print int arrays because it is initialised with (int) datatype.
{

    cout << "printing the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{

    int first[15] = {5, 7, 9, 10};
    printArray(first, 15);

    int second[15] = {0};
    printArray(second, 15);

    int third[15] = {1};
    printArray(third, 15);

    int firstsize = sizeof(first) / sizeof(int);
    cout << "Size of first array is " << firstsize << endl;

    return 0;
}