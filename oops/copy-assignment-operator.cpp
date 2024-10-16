#include <iostream>
#include <string.h>
using namespace std;

class Hero
{

private:
    int health;
    char level;

public:
    int getHealth()
    {
        return health;
    }

    char getlevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setlevel(char ch)
    {
        level = ch;
    }

    char *name; // pointer

    Hero()
    {
        cout << "Simple constructor called" << endl;
        name = new char[100]; // allocated(dynamically) in heap because more space is available there..
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    void print()
    {
        cout << endl;
        cout << "Name: " << this->name << endl;
        cout << "Level: " << this->level << endl;
        cout << "Health: " << this->health << endl; // indicating(this->) that im talking about current object's data member..
    }

    // copy constructor

    Hero(Hero &temp)
    {
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;
        this->health = temp.health;
        this->level = temp.level;
    }
};

int main()
{

    Hero hero1;
    hero1.setHealth(69);
    hero1.setlevel('D');
    char name[7] = "Prachi";

    hero1.setName(name);

    Hero hero2(hero1);
  
    hero1.name[0] = 'G';
    hero1.print();
    hero2.print();
    hero1 = hero2;


    hero1.print();
    hero2.print();
}