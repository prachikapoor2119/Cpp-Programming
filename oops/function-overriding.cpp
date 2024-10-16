#include <iostream>
using namespace std;

class Animal{
public:
void speak(){
    cout << "Speaking" << endl;

}
};

class Dog:public Animal{

    public:
    void speak(){
        cout << "Barking" << endl;
    }
};

int main(){
    Dog obj;
    obj.speak();

    Animal obj1;
    obj1.speak();
}

// Yes, method overriding occurs when a subclass provides a specific implementation of a method that is already defined in its superclass.This allows the subclass to alter or extend the behavior of that method.The overriding method in the subclass has the same name, return type, and parameters as the method in the superclass.This is a key feature of polymorphism in object - oriented programming, enabling objects to use methods in a way that is specific to their class.