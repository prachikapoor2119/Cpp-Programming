#include <iostream>
using namespace std;

// Hierarchical Inheritance

class A
{
public:
    void func()
    {
        cout << "Inside function 1" << endl;
    }
};

class B : public A
{
public:
    void func2()
    {
        cout << "Inside function 2" << endl;
    }
};

class C : public A
{
public:
    void func3()
    {
        cout << "Inside function 3" << endl;
    }
};

int main()
{

    A object1;
    object1.func();
    B object2;
    object2.func();
    object2.func2();

    C object3;
    object3.func();
    object3.func3( );
}