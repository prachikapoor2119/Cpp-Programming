#include <iostream>
using namespace std;

// Function Signature
void printCounting(int n) // this function doesn't return any value so using void
{ 
    //function body
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }

    return; // can be used here (doesnt have any use, code will work fine without it toooo )
}

int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    //Function call
    printCounting(n);
}