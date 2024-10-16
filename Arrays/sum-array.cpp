#include <iostream>
using namespace std;

int sum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return sum;
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

    int sumArray = sum(arr, n);
    cout << "The sum of the array is " << sumArray << endl;
}