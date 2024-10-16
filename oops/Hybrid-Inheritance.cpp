#include <iostream>
using namespace std;
class A
{
public:
    void func()
    {

        cout << "Inside the func a" << endl;
    }
};

class D
{
public:
    void func4()
    {
        cout << "Inside the func d" << endl;
    }
};

class B : public A
{
public:
    void func2()
    {
        cout << "Inside the func b" << endl;
    }
};

class C : public A, public D
{

public:
    void func3()
    {

        cout << "Inside the func c" << endl;
    }
};

int main()
{

    C obj;
    obj.func();
    obj.func4();
    obj.func3();
}