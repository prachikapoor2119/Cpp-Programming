// #include <iostream>
// #include <string.h>
// using namespace std;

// void reverse(char arr[], int n)
// {
//     char temp;
//     for (int i = 0; i < n / 2; i++)
//     { 
//         temp = arr[i];
//         arr[i] = arr[n - i - 1];
//         arr[n - i - 1] = temp;
//     }
// }

// int main()
// {

//     char arr[20] = "Prachi";

//     int a = strlen(arr);
//     cout << a << endl;
//     reverse(arr, a);
//     cout << arr << endl;
// }



// or(using swap function)

#include <iostream>
#include <string.h>
using namespace std;

void reverse(char name[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(name[start], name[end]);
        start++;
        end--;
    }
}

int main()
{

    char arr[50];
    cin >> arr;
    int count = 0;
    // int i = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
        // i++;
    }

    cout << count << endl;
    int a = count;
    reverse(arr, a);
    cout << arr;
}