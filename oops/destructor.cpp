#include <iostream>
using namespace std;

class Hero{
public:
     //Destructor

     ~Hero(){
         cout << "Destructor bhen called" << endl;
     }
};

int main(){ 

    //static
    Hero a;

    //dynamic

    Hero *b = new Hero();

    
    //manually destructor call

    delete b;
    return 0;
}