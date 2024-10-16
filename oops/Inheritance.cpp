// #include <iostream>
// using namespace std;

// class Human
// {
// public:
//     int height;
//     int weight;
//     int age;

// public:
//     int getAge()
//     {
//         return this->age;
//     }

//     void setweight(int w)
//     {
//         this->weight = w;
//     }
// };

// class Male : public Human
// {
// public:
//     string color;

//     void sleep()
//     {
//         cout << "Male sleeping" << endl;
//     }
// };

// int main()
// {

//     Male object1;
//     object1.setweight(84);
//     cout << object1.weight << endl;
//     cout << object1.age << endl;
//     cout << object1.height << endl;
//     cout << object1.color << endl;

//     object1.sleep();
// }







// case 1
// Data Member = public
// Mode of Inheritance = public

// #include <iostream>
// using namespace std;

// class Human
// {
// public:
//     int weight;
// };

// class Male : public Human
// {
// };

// int main()
// {

//     Male object1;
//     object1.weight = 80;
//     cout << object1.weight << endl;
// }








// case 2
// Data Member = public
// Mode of Inheritance = protected

// #include <iostream>
// using namespace std;

// class Human
// {
// public:
//     int weight;
// };

// class Male : protected Human
// {
// public:
//     int getweight()
//     {
//         return weight;
//     }

//     void setweight(int w)
//     {
//         weight = w;
//     }
// };

// int main()
// {

//     Male object1;
//     object1.setweight(80);
//     cout << object1.getweight() << endl;
// }









// case 3
// Data Member = public
// Mode of Inheritance = private

#include <iostream>
using namespace std;

class Human
{
public:
    int weight;
};

class Male : private Human
{
public:
    int getweight()
    {
        return weight;
    }

    void setweight(int w)
    {
        weight = w;
    }
};

int main()
{

    Male object1;
    object1.setweight(80);
    cout << object1.getweight() << endl;
}

// Inheritance Type :

    // First Code(private inheritance) : Inherits Human as a private member.This means that the members of the Human class cannot be accessed by any class that inherits from Male,
// nor can they be accessed outside the Male class.Essentially, Human is not visible to Male's subclasses or outside users.

// In the first code, any attempt to access weight from outside the Male class(e.g., through a derived class) will result in a compilation error.

 // Second Code(protected inheritance) : Inherits Human as a protected member.This allows Male's subclasses to access the Human members. The weight member of Human is visible in Male and any derived classes, but still not accessible from outside these classes.

// In the second code, derived classes from Male can access weight directly.