#include <iostream>
#include "hero.cpp"
using namespace std;

class Hero123
{
    // properties
        public: 
    char name[100];
    int health;
    char level;
    char level2;
    char level3;


    public:

    int level4 =10;
    void print(){
        cout << level4 << endl;
    }

};

int main()
{

    // creation of object(object ko instantiate karrhe hai)

    // static allocation;
    Hero123 h1;
    Hero h2;


    cout << "size: " << sizeof(h1) << endl; // ans=116 because of extra padding caused due to int and added after char which will be 3 bytes....
    // if removed int no extra padding will be needed and therefore it will print and add normal sizes of all datatypes....
    cout << "size: " << sizeof(h2) << endl;

    Hero123 prachi;
    prachi.health = 4;
    prachi.level = '5';

    cout << "health is: " << prachi.health << endl; 
    // not giving garbage value because both have specified values 
    cout << "Level is: " << prachi.level << endl;
    cout << "Level 3 is " << prachi.level3 << endl; //giving garbage value because no value is given to this ..
    h1.print();

    return 0;
}