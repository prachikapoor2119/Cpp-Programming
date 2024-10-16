#include <iostream>
using namespace std;

class Circle
{
private:
    const double radius; // const data member

public:
    // constructor to initialise the const data member
    Circle(double r) : radius(r) {}

    // const member function to get the area

    double getArea() const
    {
        return 3.14 * radius * radius; // calculate area
    }

    // const member function to get the radius
    double getRadius() const
    {
        return radius; // return radius
    }
};

int main()
{

    // creation of const object
    const Circle myCircle(5.0);

    // output the radius and area using const member functions
    cout << "Radius " << myCircle.getRadius() << endl;
    cout << "Area " << myCircle.getArea() << endl;

    return 0;
}