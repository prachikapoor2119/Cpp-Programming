#include <iostream>
using namespace std;

// Base class
class Animal
{
public:
    void speak()
    {
        cout << "Animal speaks" << endl;
    }
};

// Derived class
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog barks" << endl;
    }
};

int main()
{
    Animal myanimal;
    Dog myDog;
    myanimal.speak(); //base class
    myDog.speak(); // Inherited from Animal
    myDog.bark();  // Dog's own method

    return 0;
}
// Animal is the base class, which has a method speak().
//Dog is the derived class that inherits from Animal and has its own method bark().The Dog class can use the speak() method defined in Animal.