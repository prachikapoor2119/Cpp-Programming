#include <iostream>
using namespace std;
int sum(int a, int b)
{
    int c = a + b;
    return c;
}

//this will not swap a and b
void swap(int a, int b) //a and b = copied arguments/parameters
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 4, b = 5;
    cout << "The sum of 4 and 5 is " << sum(a, b)<<endl;
    cout << "The value of a is " << a << " and the value of b is " << b << endl;
    swap(a, b); //a and b = actual arguments/parameters
    cout << "The value of a is " << a << " and the value of b is " << b << endl;

    return 0;
}