#include <iostream>
using namespace std;

class A{
    public:
    void sayHello(){
        cout << "Hello Love Babbar " << endl;
    }
    void sayHello(string name)
    {
        cout << "Hello Love hehe Babbar " << name<< endl;
    }

    int sayHello(string name,int n){
        cout << "Hello Love Babbar baby" << endl;
        return n;
    }
};

int main(){
    A obj;
    obj.sayHello();
    string s;
    int n;
    obj.sayHello(s,n);
    obj.sayHello(s);
    return 0;
}