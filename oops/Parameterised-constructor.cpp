#include <iostream>
using namespace std;

class Hero
{

    int health;
    char level;

public:
    Hero(int health)
    {
        // cout << "this-> " << this << endl;
        this->health = health;
    }

    Hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }

    void print()
    {
        cout << health << " ";
        cout << level << endl;
    }
};

int main()
{

    // statically

    Hero ramesh(10);
    cout << "Address of ramesh " << &ramesh << endl;
    ramesh.print();

    // dynamically

    Hero *h = new Hero(12);
    cout << "Address of Ramesh using dynamic allocation is " << &ramesh << endl; // both addresses are same because same constructor is being called because class used is same..
    h->print();

    Hero temp(22, 'B');

    cout << "Address of parameterised constructor is " << &temp << endl;
    temp.print();
}