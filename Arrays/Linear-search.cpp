#include <iostream>
using namespace std;

bool search(int arr[], int size, int a)
{
    for (int i = 0; i < size; i++)
    {

        if (arr[i] == a)
        {
            return 1; // returning 1 on the spot if element founded ,no need to traverse further..
        }
    }
    return 0; // returning 0 after traversing the whole loop/array and not finding the element..
}

int main()
{

    int n;
    cout << "Enter the size of an array" << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];                        
    }

    int a;
    cout << "Enter the element you want to search " << endl;
    cin >> a;
    bool ans = search(arr, n, a);
    if (ans)
    {
        cout << a << " is there" << endl;
    }

    else
    {
        cout << a << " is not there" << endl;
    }

    return 0;
}