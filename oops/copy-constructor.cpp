#include <iostream>
using namespace std;

class Hero{
    
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

    

        Hero(int health,int level){
            this->health = health;
            this->level = level;
        }

        void print(){

            cout << this->level << endl;
            cout << this->health << endl; //indicating(this->) that im talking about current object's data member..
        }

        //copy constructor

        Hero(Hero& temp){ //call by reference
            cout << "copy constructor called" << endl;
            this->health = temp.health;
            this->level = temp.level;
        }
    };

int main(){

    Hero suresh(70,'c');
    suresh.print();

    //Copy constructor
    Hero ritesh(suresh);
    ritesh.print();
}