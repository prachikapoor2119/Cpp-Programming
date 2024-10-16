// // from right to left
// #include <iostream>
// #include <math.h>
// using namespace std;

// int main()
// {

//     int n;
//     cout << "Enter the value of n" << endl;
//     cin >> n;
//     float ans = 0;
//     int i = 0;

//     while (n != 0)
//     {
//         int bit = n & 1;
//         ans = (bit * pow(10, i)) + ans; // storing ans in float bcoz pow gives floating value so it has to be stored in float to give the exact ans...
//         cout << ans << endl;            // to track the bits
//         n = n >> 1;
//         i++;
//     }

//     cout << ans << endl;
// }

// without storing ans in float and storing it in int
// from left to right

#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    int ans = 0;

    while (n != 0)
    {
        int bit = n & 1;
        ans = (ans * 10) + bit;
        cout << ans << endl; // to track the bits
        n = n >> 1;
    }

    cout << ans << endl;
}