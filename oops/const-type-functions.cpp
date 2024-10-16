#include <iostream>

class SimpleClass
{
private:
    int value;

public:
    // Constructor to initialize value
    SimpleClass(int v) : value(v) {}

    // Const member function to get the value
    int getValue() const
    {
        return value;
    }

    // Non-const member function to set the value
    void setValue(int v) 
    {
        value = v;
    }
};

int main()
{
    SimpleClass obj(10); // Create an object with initial value 10

    // Output the current value using the const member function
    std::cout << "Initial Value: " << obj.getValue() << std::endl; // Outputs: 10

    // Change the value using the non-const member function
    obj.setValue(20);

    // Output the updated value
    std::cout << "Updated Value: " << obj.getValue() << std::endl; // Outputs: 20

    return 0;
}

//there is no concept of a const setter function in C++ in the traditional sense.A setter function is designed to modify the state of an object without changing the object itself, and marking it as const would contradict its purpose since const methods are not allowed to change the object's state.