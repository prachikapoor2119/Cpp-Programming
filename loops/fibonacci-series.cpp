#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    int first = 0;
    int second = 1;
    cout << first << " ";
    cout << second << " ";
    for (int i = 2; i < n; i++)
    {
        int next = first + second;

        cout << next << " ";
        first = second;
        second = next;
    }
}