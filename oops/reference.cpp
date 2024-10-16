#include <iostream>
using namespace std;

void modify(int &ref)
{
    ref += 10; // Modifies the original variable
}

int main()
{
    int x = 5;
    modify(x);                           // x is passed by reference
    cout << "Modified x: " << x << endl; // Output: Modified x: 15
    return 0;
}
// int& ref is a reference to the integer variable x. Any changes made to ref will affect x.