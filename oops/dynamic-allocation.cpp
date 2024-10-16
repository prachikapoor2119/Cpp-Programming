#include <iostream>
using namespace std;

class Hero
{

private:
    int health; //health is a data member
    char cubeofice;//this too

public:
    char alphabet;//this too
    int number;//this too
    int level;// this too
    

    int gethealth()
    {
        return health;
    }

    void sethealth(int h)
    {
        health = h;
    }

char getcubeofice()
    {
        return cubeofice;
    }

    void setcubeofice(char ch)
    {
        cubeofice = ch;
    }
};

int main()
{

    Hero b;

    b.number = 69;
    b.sethealth(69);

    cout << "number is " << b.number << endl;
    cout << "health is " << b.gethealth() << endl;

    // dynamically allocated(memory allocated in heap)

    Hero *a = new Hero;

     a->number = 70;
    a->sethealth(72);

    cout << "number is " << (*a).number << endl;
    cout << " health is " << (*a).gethealth() << endl;

    cout << "number is " << a->number << endl;
    cout << " health is " << a->gethealth() << endl;
    cout << " cubeofice is " << a->getcubeofice() << endl;
}