#include <iostream>
using namespace std;

class B
{
public:
    int a;
    int b;

public:
    int add()
    {
        return a + b;
    }

    void operator+(B &obj)
    {
        int value1 = this->b;
        int value2 = obj.b;
        cout << "output " << value2 - value1 << endl;
    }

    // void operator+(B &obj)
    // {
    //     cout << "Hello Babbar" << endl;
    // }

    void operator()()
    {
        cout << "Main bracket hun " << this->b << endl;
    }
};

int main()
{

    B obj1, obj2;
    cin >> obj1.b;
    cin >> obj2.b;
    obj1 + obj2;
    obj2();
}

// When you overload the + operator as a member function, the first parameter(the left operand) is implicitly represented by the object on which the function is called(using this).
// The second parameter is the argument you pass to the function.

// Explicit : You must specify both operands or parameters.
// Implicit : One operand or parameter is automatically assumed based on the context(like this in member functions).