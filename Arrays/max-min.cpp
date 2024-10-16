// #include <iostream>
// using namespace std;

// int main()
// {
//     // inputing size of array
//     int size;
//     cout << "Enter the size of arrray" << endl;
//     cin >> size;

//     // inputing elements of an array
//     int num[size];
//     cout << "Enter the elements of the array" << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cout << "Enter the element at index " << i << endl;
//         cin >> num[i];
//     }

//     // finding maximum element
//     int max = num[0];
//     for (int i = 0; i < size; i++)
//     {
//         if (num[i] > num[0])
//         {
//             max = num[i];
//         }
//     }

//     // printing max element
//     cout << "Maximum value in array is " << max << endl;

//     // finding minimum element
//     int min = num[0];
//     for (int i = 0; i < size; i++)
//     {
//         if (num[i] < num[0])
//         {
//             min = num[i];
//         }
//     }

//     // printing min element
//     cout << "Minimum value in array is " << min << endl;
// }

// or

// #include <iostream>
// #include <limits.h>
// using namespace std;

// int getMax(int arr[], int n)
// {
//     int max = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }

//     return max;
// }

// int getMin(int arr[], int n)
// {
//     int min = INT_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] < min)
//         {
//             min = arr[i];
//         }
//     }

//     return min;
// }

// int main()
// {
//     int n;
//     cout << "Enter the value of n(size)" << endl;
//     cin >> n;

//     int arr[n];
//     cout << "Enter the elements of the array" << endl;

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int max = getMax(arr, n);
//     cout << "Max value is  " << max << endl;

//     int min = getMin(arr, n);
//     cout << "Min value is  " << min << endl;
// }


// using pre-defined funtions

#include <iostream>
#include <limits.h>
using namespace std;

int getMax(int arr[], int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
    }

    return maxi;
}

int getMin(int arr[], int n)
{
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        mini = min(mini, arr[i]);
    }

    return mini;
}

int main()
{
    int n;
    cout << "Enter the value of n(size)" << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = getMax(arr, n);
    cout << "Max value is  " << max << endl;

    int min = getMin(arr, n);
    cout << "Min value is  " << min << endl;
}
