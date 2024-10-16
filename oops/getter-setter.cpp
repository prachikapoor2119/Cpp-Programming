#include <iostream>
using namespace std;

class princess
{  private:
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
        this->level = ch;
    }
};


int main()
{

    princess parth;
    parth.setHealth(70);
    cout << "parth health is " << parth.getHealth() << endl;

    return 0;
}
