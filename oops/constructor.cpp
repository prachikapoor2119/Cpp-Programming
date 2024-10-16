#include <iostream>
using namespace std;

class Hero
{

    
        // writing our own constructor
    public:
        int health;
        Hero()
        { 
            health = 100;
            cout << "Constructor called" << endl;
    }
};

int main()
{

    cout << "Hi" << endl;
    // object created statically

    // constructor being called
    Hero Parth;
    cout << "Health is " << Parth.health << endl;
    // cout in constructor being printed

    cout << "Hello" << endl;

    // object being called dynamically

    Hero *a = new Hero;//without bracket
    Hero *b = new Hero(); // with bracket both will be the same..
}