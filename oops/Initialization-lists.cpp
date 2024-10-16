#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    const string name; // const data member
    int age;           // regular data member

    // string & (reference): 
    // This means that the parameter is a reference to a string rather than a copy. Passing by reference avoids the overhead of copying the string, which is especially beneficial for large strings. It improves performance, particularly when dealing with larger data structures.
    // If you used just string n, it would create a copy of the string, which would be less efficient.

public:
    // Constructor using an initialization list
    Person(const string &n, int a) : name(n), age(a)
    {
    }

    // Member function to display information
    void display() const
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main()
{
    // Create a Person object
    Person person("Alice", 30);

    // Display the person's information
    person.display();

    return 0;
}

// without using const keyword

#include <iostream>

class MyClass
{
public:
    // Member variables
    int x;
    int y;

    // Constructor using an initialization list
    MyClass(int a, int b) : x(a), y(b)
    {
        // Additional logic can go here if needed
    }

    // Method to display values
    void display() const
    {
        std::cout << "x: " << x << ", y: " << y << std::endl;
    }
};

int main()
{
    // Create an object of MyClass
    MyClass obj(10, 20);

    // Display the initialized values
    obj.display();

    return 0;
}

//quick points

// When you pass an int to a function or constructor, it's typically efficient to pass it by value rather than by reference. This is because int is a small, fixed-size data type (usually 4 bytes), and copying it incurs minimal overhead. int, char, or float can also be passed by value

// In contrast, larger objects like std::string can be much more costly to copy, which is why we use a reference for those. For fundamental types like int, the performance difference is negligible, so passing by value is perfectly acceptable.

// When you pass a variable by reference (using string &), the function has direct access to the original variable. This means it can modify the original object, because a reference is essentially an alias for that object.so const variable should be used

// •	Initialization lists are required for const members and references.
// 	•	For non-const members, the initialization list is optional, but using it can improve efficiency and avoid default construction.