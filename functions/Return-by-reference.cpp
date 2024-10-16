#include <iostream>
using namespace std;
int &swapReferenceVar(int &a, int &b)
{ // int & = reference variable return krrhi hun..
    int temp = a;
    a = b;
    b = temp;
    // return a;
    return b;
}

int main()
{
    int a = 4, b = 5;

    cout << "The value of a is " << a << " and the value of b is " << b << endl;
    swapReferenceVar(a, b);

    cout << "The value of a is " << a << " and the value of b is " << b << endl;
    swapReferenceVar(a, b) = 366;

    cout << "The value of a is " << a << " and the value of b is " << b << endl;
    return 0;
}