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

class Dog 
{
    public:
        string color;

        void speak2(){
            cout << "Barking" << endl;
        }
};

// Mutilple Inheritance

class Mix:public Animal,public Dog{
};

int main()
{
    Mix m;
    m.speak();
    m.speak2();
}