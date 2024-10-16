#include <iostream>
using namespace std;

class Animal
{
public:
    int age;
    int weight;

public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};

class Dog : public Animal
{
    public:
    int getage(){
        return age;
    }
};

class Puppie:public Dog{

    // public:
    //     int getage()
    //     {
    //         return age;
    //     }
};

int main()
{

    Dog d;
    d.speak();
    cout << d.getage() << endl;
    Puppie p;
    p.speak();
    cout << p.getage() << endl;
    return 0;
}