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

        static int Timetocomplete;
        static int random()
        {
            return Timetocomplete ;
    }
};

int Hero::Timetocomplete =50;

int main(){
    cout << Hero::Timetocomplete << endl;
    cout << Hero::random() << endl;
}